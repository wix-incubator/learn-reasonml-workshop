/*
 In Reason there are 6 basic types: int, float, char, string, bool, and unit.

 Note the keyword [let], which is how variable assignment is done in Reason.
 (https://reasonml.github.io/docs/en/syntax-cheatsheet#let-binding)

 In Reason floats are distinguished from ints by their decimal points. 0 is an
 int, 0. is a float.

 In addition the basic math operations are also distinguished by a decimal
 point. For example, `+` allows you to add two ints and `+.` allows you to add two
 floats.

 The standard int operators are: +, -, *, /
 The standard float operators are: +., -., *., /.

 For further reading: https://reasonml.github.io/docs/en/integer-and-float
 */
let intFour = 4;
let floatFour = 4.;

/*
 Signatures
 ==========
 You can explicitly write the type of a variable (like in the following example)
 but this is totally optional, no need to write them
 */
let intFourWithSignature: int = 4;
let floatFourWithSignature: float = 4.;

/* Uncomment the following line to see the compilation error */
/* let seven: float = 7; */

/* IMPLEMENT ME */
let intAverage = (x, y) => assert(false);

/* IMPLEMENT ME */
let floatAverage = (x, y) => assert(false);

/*
  String and Chars (https://reasonml.github.io/docs/en/string-and-char):
  ===============
  As in many languages strings are denoted with "" and chars are denoted with ''.
  String concatenation is done with the ++ operator.
 */

let firstName = "Shlomi";
let lastName = "Toussia";
let lastestName = "Cohen";

let myHero = firstName ++ lastName ++ lastestName;

assert("Shlomi Toussia Cohen" == myHero);

/*
 Booleans (https://reasonml.github.io/docs/en/boolean):
 ===============
 You can use:
 && for logical and
 || for logical or
 !  for logical not
 */

let aBooleanFalse = false;
assert(true == !aBooleanFalse);

/*
 Function signatures
 ===================

 In Reason, functions are also values! And so, functions also have type
 signatures.

 In a function signature, types of parameters are enclosed within paranthesis.
 The return value is the described last and preceded immediately by an arrow
 [=>].

 So the signature for a integer multiplication is:
 type intMult = (int, int) => int

 Reason knows to infer the function type by its body. hover your mouse
 over the function name to see it
 */

let intMult = (x, y) => x * y;

let floatMult = (x, y) => x *. y;

/*
 Note: In Reason there's no explicit return statement, just like Ruby / Perl
 Functions return the value of the last expression in that function.
 */
let verboseMult = (n, m) => {
  Js.log(
    "I'm multiplying two numbers: "
    ++ string_of_int(n)
    ++ " "
    ++ string_of_int(m),
  );

  /* Look ma! no return! */
  n * m;
};

/*
   The [unit] type (https://reasonml.github.io/docs/en/function.html#no-argument)
   ===============
   In a strongly typed language like Reason you need to define what a function gets and returns
   every time, but sometimes a function neither returns anything nor takes any input.

   In case the function returns nothing (similiar to javascript returning `undefined` or C functions
   returning `void`), in Reason the function will return `()` called unit. `()` is a singleton value
   of type `unit`.

   hover your mouse over the following functions and look at their return type:
 */
Js.log;
Node.Process.exit;
Dom.Storage.setItem;

/*
   In cases where the function needs no input, in Reason it must receive a value so we pass in `()`

   hover your mouse over the following functions and look at their return type:
 */
Js.Date.now;
Js.Math.random;

/*
   Please note that we invoke `Js.Math.random()` but this is just syntactic suger for `Js.Math.random(())`
 */
Js.log("I picked a random number: " ++ string_of_float(Js.Math.random()));

/* Let's do a couple of exercises for shits and giggles */

/* IMPLEMENT ME */
let square = x => assert(false);

/* IMPLEMENT ME */
let half = x => assert(false);

TestUtils.runTests(
  __MODULE__,
  () => {
    TestUtils.test("should calculate int average", () =>
      assert(intAverage(3, 5) == 4)
    );
    TestUtils.test("should calculate float average", () =>
      assert(floatAverage(5., 10.) == 7.5)
    );
    TestUtils.test("should calculate square", () =>
      assert(square(6) == 36)
    );
    TestUtils.test("should calculate half", () =>
      assert(half(42) == 21)
    );
    TestUtils.test("should calculate something complext", () =>
      string_of_int(half(square(4))) == "8"
    );
  },
);