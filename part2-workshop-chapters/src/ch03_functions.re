/* two ways of defining a function
let foo x = 2 * x
let bar = x => 2 * x

*/

/* example?????? */

/* Let's implement our own functions using +, -, *, and / below.
/* IMPLEMENT ME */
let plus = (x, y) => assert(false)

/* IMPLEMENT ME */
let times = (x, y) => assert(false)

/* IMPLEMENT ME */
let minus = (x, y) => assert(false)

/* IMPLEMENT ME */
let divide = (x, y) => assert(false)

keep these!?!?!?
other option
 */





/* Now lets say we are given the following funtions: */
let square = x => assert(false);
let half = x => assert(false);
assert("18" == string_of_int(half(square(5))))

let calc = x => {
  let squared = square(x);
  let halved = half(squared);
  string_of_int(halved);
};
Js.log("(7^2)/2 = " ++ calc(7));

/* fast pipe??? */
let calc' = x => {
  x |> square |> half |> string_of_int
}

/* Now lets try to write [average] by reusing [add] and [half] */
/* IMPLEMENT ME */
let average = (x, y) => assert(false);

let runTests = () => {
    Js.log("=============== Running Tests Ch03 =============")
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