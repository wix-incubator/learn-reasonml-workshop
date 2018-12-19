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
  Pipe:
  ===================
  Reason has a special syntax `|>` called 
*/
/* pipe??? */
/* let calc' = x => {
  x |> square |> half |> string_of_int
} */

let runTests = () => {
    Js.log("=============== Running Tests Ch03 =============")
    assert (twice(addOne, 3) == 5);
    assert (addTwo(1335) == 1337);
    assert (raiseToTheFourth(1) == 1);
    assert (raiseToTheFourth(10) == 10000);
    Js.log("===============   End Tests   ==================")
}

runTests();