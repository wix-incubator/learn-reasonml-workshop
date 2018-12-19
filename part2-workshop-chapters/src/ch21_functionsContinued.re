/* 
  Currying (https://reasonml.github.io/docs/en/function#currying):
  ===================
  In Reason Functions are first class.
  This means that you can take a function and pass it around as an argument to other functions.

  An important note: 
  In Reason functions can automatically be partially called which means both the syntaxes below are the same:

  ```
  let add = (x, y) => x + y;
  let add = (x) => (y) => x + y;
  ```
*/

/* Example: */
let add = (x, y) => x + y;
let addFive = add(5);
Js.log(addFive(6)); /* 11 */

/* 
  Now let's write a function named twice: it will take a function and apply
  that function to itself two times.
*/

/* IMPLEMENT ME */
let twice = (f, x) => assert(false);

let addOne = x => x + 1;
let square = x => x * x;

/* Lets also implment addTwo and raiseToTheFourth using twice and addOne sqaure respectively */

/* IMPLEMENT ME */
let addTwo = assert(false);

/* IMPLEMENT ME */
let raiseToTheFourth = assert(false);

/* 
  Pipe / reverse-application:
  ===================
  The operator |> is called reverse-application operator or pipe operator. 
  It lets you chain function calls: x |> f is the same as f(x). 
  That may not look like much, but it is quite useful when combining function calls.
*/

/* Example: */
let calc = x => {
  x /* some input */
  |> square /* x => x * x */
  |> addOne /* x => x + 1 */
  |> addTwo /* x => x + 2 */
}

/* 
  Type parametricity:
  ===================
  The most trivial function is `id`: 
*/
let intId = (x: int) => x;
let stringId = (x: string) => x;
let boolId = (x: bool) => x;

/*
 If you think about it, we don't really care what type we're given.
 Look at the default type signature `id` has:
 */

let id = x => x;

/*
 `id` can take any type, marked as 'a, and returns a value of the same type.

 Since `x` is not altered directly, the compiler infers that `id` is polymorphic,
 meaning it can take any type. The moment we do with it something, the compiler
 infers the type by the function we apply:
*/
let successor = x => x + 1;

let runTests = () => {
    Js.log("=============== Running Tests for " ++ __MODULE__);
    assert (twice(addOne, 3) == 5);
    assert (addTwo(1335) == 1337);
    assert (raiseToTheFourth(1) == 1);
    assert (raiseToTheFourth(10) == 10000);
    Js.log("===============   End Tests   ==================")
}

runTests();