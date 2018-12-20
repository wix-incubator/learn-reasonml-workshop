/*
   Function are first class (https://reasonml.github.io/docs/en/function#currying):
   =========================
   In Reason Functions are first class just like javascript, so you can pass functions around
   as arguments to other functions.
 */
let apply = (f, x) => f(x);
assert(6 == apply(String.length, "hello!"));

/*
 Partial Application (https://reasonml.github.io/docs/en/function#currying):
 ===================
 In Reason functions are automatically partially applied when they don't get all the arguments
 they expect.
 */
let add = (x, y) => x + y;
let addFive = add(5);
assert(11 == addFive(6));
assert(36 == addFive(31));

/*
 Now let's write a function named twice: it will take a function and apply
 that function to itself... well... twice.
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
 Pipe / Reverse Application:
 ===================
 The operator |> is called pipe operator or reverse application operator.
 It lets you chain function calls: x |> f is the same as f(x).
 That may not look like much, but it is quite useful when combining many function calls.
 */
let calc = x => {
  x  /* 3 */
  |> addTwo  /* 5 */
  |> square  /* 25 */
  |> addOne; /* 26 */
};
assert(26 == calc(3));

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

TestUtils.runTests(
  __MODULE__,
  () => {
    TestUtils.test("should add one twice", () =>
      assert(twice(addOne, 3) == 5)
    );
    TestUtils.test("should add two", () =>
      assert(addTwo(1335) == 1337)
    );
    TestUtils.test("should raise to the fourth", () =>
      assert(raiseToTheFourth(1) == 1)
    );
    TestUtils.test("should raise to the fourth", () =>
      assert(raiseToTheFourth(10) == 10000)
    );
  },
);