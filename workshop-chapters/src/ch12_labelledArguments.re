/*
  The following function has the signature:

  let divide : int -> int -> int

  Looking at just the signature, it's not obvious which int argument is
  the dividend and which is the divisor.
 */
let divide = (dividend, divisor) => dividend / divisor;

/*
 We can fix this using labelled arguments.

 To label an argument in a signature, and when defining a function, we
 put a tilde (~) before the name of the argument.

 The following function has the signature:

 let divide: (~dividend:int, ~divisor:int) => int
 */
let divideLabelled = (~dividend, ~divisor) => dividend / divisor;

/* We can then call it using: divide(~dividend=9, ~divisor=3) */
assert(3 == divideLabelled(~dividend=12, ~divisor=4));

/* Labelled arguments can be passed in in any order. */
assert(3 == divideLabelled(~divisor=4, ~dividend=12));

/* We can also pass variables into the labelled argument: */
let top = 12;
let bottom = 4;

divideLabelled(~dividend=top, ~divisor=bottom);

/*
 If the variable name happens to be the same as the labelled argument, we
 don't even have to write it twice, this short-hand syntax is called punning.:
 */
let dividend = 12;
let divisor = 4;
assert(3 == divideLabelled(~dividend, ~divisor));

/*
 The following functions are examples of modules that use labels to
 help clarify what their arugments mean:
 */
StringLabels.sub;
Js.Re.fromStringWithFlags;
Js.Math.pow_int;
StdLabels.Array.make_matrix;

/*
 IMPLEMENT ME
 Now write a function [modulo(~dividend, ~divisor)] using our version of divide with
 labelled arguments (e.g. [modulo(~dividend:7, ~divisor:2)] should equal 1)
 */
let modulo = (~dividend, ~divisor) => assert(false);

TestUtils.runTests(
  __MODULE__,
  () => {
    TestUtils.test("should calculate modulo", () =>
      assert(1 == modulo(~dividend=7, ~divisor=2))
    );
    TestUtils.test("should calculate modulo", () =>
      assert(0 == modulo(~dividend=12, ~divisor=4))
    );
    TestUtils.test("should calculate modulo after reordering params", () =>
      assert(8 == modulo(~dividend=24, ~divisor=16))
    );
  },
);