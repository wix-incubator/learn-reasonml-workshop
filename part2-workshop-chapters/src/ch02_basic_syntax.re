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

  Mpore inforamtion on this:
  (https://reasonml.github.io/docs/en/integer-and-float#floats)

  Signatures
  ==========

  You can explicitly write the type of a variable like so:
 */
let four: int = 4;
let floatFour: float = 4.;
let eight = four + 4;
let eightFloat = floatFour +. 4.;

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
Js.log(firstName ++ " " ++ String.make(1, middleInitial) ++ ". " ++ lastName);

/*
  Booleans (https://reasonml.github.io/docs/en/boolean):
  ===============
  You can use:
  && for logical and
  || for logical or
  !  for logical not
 */

/* MAKE ME PASS */
let aBooleanFalse = false;
assert(aBooleanFalse && true);

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
 */

let intMult = (x, y) => x * y; /* intMult: (int, int) => int*/
let floatMult = (x, y) => x *. y; /* floatMult: (float, float) => float*/

/* 
  Note: In Reason there's no explicit return statement: functions just return the
  value of the last statement in that function.
 */
let verboseMult = (n, m) => {
  Js.log(
    "I'm multiplying two numbers: "
    ++ string_of_int(n)
    ++ " "
    ++ string_of_int(m),
  );
  /* function returns the value of the last expression */
  n * m;
};

/*
  The [unit] type (https://reasonml.github.io/docs/en/function.html#no-argument)
  ===============
  In a strongly typed language like Reason you need to define what a function gets and returns every time,
  but sometimes a function does not return anything or take any input, e.g. Js.log, Js.Math.random, Js.Date.now, etc.

  In these cases, the function will receive unit as an argument or return unit as a result.

  `()` is called "unit" and is a singleton value of type `unit`.
 */

let whatIsTheTime = () => {
  Js.log("The time now is: " ++ string_of_float(Js.Date.now()));
};

/* call the function with the value of type unit */
whatIsTheTime();

/* IMPLEMENT ME */
let intAverage = (x, y) => assert(false);

/* IMPLEMENT ME */
let floatAverage = (x, y) => assert(false);

let runTests = () => {
  Js.log("=============== Running Tests for " ++ __MODULE__);
  assert(floatAverage(5., 5.) == 5.);
  assert(floatAverage(5., 10.) == 7.5);
  Js.log("===============   End Tests   ==================");
};

runTests();