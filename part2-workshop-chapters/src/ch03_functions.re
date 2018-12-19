/* 
  Function (https://reasonml.github.io/docs/en/function.html)
  ===================
  Lets dive in to functions!
  
  There are two ways of defining a function:
  With an arrow and return the expression as we previosuly used
*/
  let bar = x => 2 * x;

  /* Or as such: */
  let foo (x) = 2 * x;

/* Both syntaxes are valid and in the end compile to the same code (minus the name in this case :D ). */

/* Let's implement a couple of our own functions */

/* IMPLEMENT ME */
let square = x => assert(false);

/* IMPLEMENT ME */
let half = x => assert(false);

/* 
  Fast pipe:
  ===================
  Reason has a special syntax `|>` called 
*/
/* fast pipe??? */
let calc' = x => {
  x |> square |> half |> string_of_int
}

let runTests = () => {
    Js.log("=============== Running Tests Ch03 =============")
    assert (square(2) == 4);
    assert (half(4) == 2); 
    assert(string_of_int(half(square(4))) == "8")
    Js.log("===============   End Tests   ==================")
}

runTests();