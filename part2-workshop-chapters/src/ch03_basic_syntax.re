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

/*
  String and Chars (https://reasonml.github.io/docs/en/string-and-char):
  ===============
  As in many languages strings are denoted with "" and chars are denoted with ''.
  String concatenation is done with the ++ operator.

  To convert a String to a Char, use - `"a".[0]`.
  To convert a Char to a String, use - `String.make(1, 'a')`.
 */

let firstName = "George";
let lastName = "Bush";
let middleInitial = 'W';

/* "George W. Bush" */
Js.log(
  firstName ++ " " ++ String.make(1, middleInitial) ++ ". " ++ lastName,
);

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

 hover your mouse of the function name to see it
 */

let intMult = (x, y) => x * y;

let floatMult = (x, y) => x *. y;

/*
 Note: In Reason there's no explicit return statement!
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
  every time, but sometimes a function neither returns anything nor takes any input,
  e.g. Js.log, Js.Math.random, Js.Date.now, etc.

  In these cases, the function will receive unit as an argument or return unit as a result.

  `()` is called "unit" and is a singleton value of type `unit`.

  hover your mouse over the different inner functions to see their types.

  Note: `Js.Date.now()` is actually short-hand for `Js.Date.now(())`
 */

let whatIsTheTime = () => {
  Js.log("The time now is: " ++ string_of_float(Js.Date.now()));
};

/* call the `whatIsTheTime` with the value of type unit */
whatIsTheTime(); /* same as `whatIsTheTime(());` */

/* IMPLEMENT ME */
let intAverage = (x, y) => assert(false);

/* IMPLEMENT ME */
let floatAverage = (x, y) => assert(false);

TestUtils.runTests(
  __MODULE__,
  () => {
    TestUtils.test("should calculate float average", () =>
      assert(floatAverage(5., 5.) == 5.)
    );
    TestUtils.test("should calculate float average", () =>
      assert(floatAverage(5., 10.) == 7.5)
    );
  },
);