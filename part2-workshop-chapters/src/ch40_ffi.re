/* 
  FFI / Interop (https://reasonml.github.io/docs/en/external)
  ===================
  "FFI" (foreign function interface), or simply "interop" (for "interoperability") is how Reason communicates with other languages (e.g JavaScript).

  There’s over 600 thousand packages on NPM and if you’re writing Reason and targeting JavaScript as output,
  there’s a good chance you need to use a few JavaScript packages,
  so integrating with the JavaScript ecosystem in general is very important and a big selling point of Reason/Bucklescript.

  Lets take a look at the following code:
*/

[@bs.val]
external sqrt : float => float = "Math.sqrt";
let four = sqrt(16.0); /* => 4 */

Js.log("ss " ++ string_of_float(four));

/*
  In that code we declare a binding for the JavaScript `Math.sqrt` function,
  We use the `external` keyword (https://bucklescript.github.io/docs/en/intro-to-external) to declare it, and annotate its type as `float => float`.
  Finally, we indicate what it maps out to in JavaScript as the value of the external: "Math.sqrt".

  Then, we can simply use the newly declared `sqrt` function as any other fully type-safe function in Reason.

  Notice that we used the [@bs.val] attributes to indicate to the compiler that we are declaring a binding for a value.
*/