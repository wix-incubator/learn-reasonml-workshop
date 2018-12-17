/*
  In Reason there are 6 basic types: int, float, char, string, bool, and unit.

  Note the keyword [let], which is how variable assignment is done in Reason. 
  (https://reasonml.github.io/docs/en/syntax-cheatsheet#let-binding)

  In Reason floats are distinguished from ints by their decimal points. 0 is an
  int, 0. is a float.

  In addition the basic math operations are also distinguished by a decimal
  point. For example, + allows you to add two ints and +. allows you to add two
  floats. (https://reasonml.github.io/docs/en/integer-and-float#floats)

  Signatures
  ==========

  four is a value with the type int. We write the signature like this:

  let four: int

  Read it like this: "[four] is a value of type int".
 */
let four: int = 4;
let floatFour: float = 4.;

/*
  Lets insert an incorrect signature for [floatFour] to see what error the
  compiler gives you.

  let floatFour: int = 4.;
*/

/*
  Function signatures
  ===================

  In Reason, functions are also values! And so, functions also have type
  signatures.

  In a function signature, types of parameters are enclosed within paranthesis.
  The return value is the described last and preceded immediately by an arrow
  [=>].

  So the signature for a function that takes two integers and returns an
  integer is:

  let intAverage: (int, int) => int

  #NOTE: In Reason there's no explicit return statement: functions just return the
  value of the last statement in that function.
 */

/*
  String (https://reasonml.github.io/docs/en/string-and-char):
  As in many languages strings are denoted with "" and chars are denoted with ''.
  String concatenation is done with the ++ operator.
 */
let firstName = "Fred";
let lastName = "Flintstone";

/*
  You may have noticed that we didnt write the types this types.
  Signatures are not always required! Reason has very strong type inference, so you can most often omit types,
  and the compiler will infer the type of values (this case its a string).
 */
let fullName = firstName ++ " " ++ lastName;

/*
  Booleans (https://reasonml.github.io/docs/en/boolean):
  You can use:
  && for logical and
  || for logical or
  !  for logical not
 */

let aBooleanFalse: bool = false;
let () = assert (true || aBooleanFalse);

/*
  The [unit] type
  ===============

  unit is a special type in Reason that has only one possible value written ().
  It is generally used for mutation and io-operations such as printing.

  (I/O stands for input/output. Examples: printing to screen, reading a file,
  sending and receiving network requests.)

  To combine several unit operations together the ; operator is used contained
  within curly braces.
 */
let () = {
  print_endline("Hi, My name is ");
  print_endline(fullName);
  print_endline(" and I am 5 years old");
};

 /*
   Lets implement following functions:
   intAverage(10, 20) = 15
   floatAverage(10., 20.) = 15.
 */
let intAverage = (x, y) => 42;/* For you to implement */

/* let floatAverage : (float, float) => float */
let floatAverage = (x, y) => 42./* For you to implement */

let runTests = () => {
    Js.log("=============== Running Tests ==================")
    assert (floatAverage(5., 5.) == 5.); 
    assert (floatAverage(5., 10.) == 7.5); 
    Js.log("===============   End Tests   ==================")
}

runTests();