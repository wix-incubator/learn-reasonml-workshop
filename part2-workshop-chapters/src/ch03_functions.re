/*
   Function (https://reasonml.github.io/docs/en/function.html)
   ===================
   Lets dive in to functions!

   There are two ways of defining a function:
   With an arrow and return the expression as we previosuly used
 */
let bar = x => 2 * x;

/* Or as such: */
let foo = x => 2 * x;

/* Both syntaxes are valid and in the end compile to the same code (minus the name in this case :D ). */

/* Let's implement a couple of our own functions */

/* IMPLEMENT ME */
let square = x => assert(false);

/* IMPLEMENT ME */
let half = x => assert(false);

TestUtils.runTests(
  __MODULE__,
  () => {
    TestUtils.test("should calculate square", () =>
      assert(square(2) == 4)
    );
    TestUtils.test("should calculate half", () =>
      assert(half(4) == 2)
    );
    TestUtils.test("should calculate something complext", () =>
      string_of_int(half(square(4))) == "8"
    );
  },
);