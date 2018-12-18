/*
  We use let to define functions.

  Definitions take on the form:
  let functionName = (arg1, arg2) => body;

  For example, here we define a function add1 that takes a single int
  argument and returns that argument plus 1.
 */
let add1 = arg => arg + 1;

/* This function uses the built-in ++ operator to append strings. */
let stringAppend = (x, y) => x ++ y;

/* Let's implement our own functions using +, -, *, and / below. */
let plus = (x, y) => assert(false)

let times = (x, y) => assert(false)

let minus = (x, y) => assert(false)

let divide = (x, y) => assert(false)

/* Now lets say we were given those funtions below: */
let square = x => x * x;
let half = x => x / 2;
let add = (x, y) => x + y;

/* You can order function invocations with parentheses or let bindings */
/* Parentheses */
let () = Js.log("(5^2)/2 = " ++ string_of_int(half(square(5))));

/* Let bindings */
let () = {
  let squared = square(5);
  let halved = half(squared);
  let toString = string_of_int(halved);
  Js.log("(5^2)/2 = " ++ toString);
};

/* Now lets try to write [average] by reusing [add] and [half] */
let average = (x, y) => assert(false);

let runTests = () => {
    Js.log("=============== Running Tests ==================")
    assert (plus(1, 1) == 2); 
    assert (plus(50, -1) == 49);
    assert (times(8, 8) == 64);
    assert (times(2, -1024) == (-2048));
    assert (minus(-2, 2) == (-4));
    assert (minus(1337, 337) == 1000);
    assert (divide(1024, 2) == 512);
    assert (divide(31337, 31) == 1010); 

    assert (average(5, 5) == 5);
    assert (average(50, 100) == 75); 
    Js.log("===============   End Tests   ==================")
}

runTests();