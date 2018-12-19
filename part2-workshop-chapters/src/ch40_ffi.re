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
Js.log(string_of_float(sqrt(16.0))); /* 4 */

/*
  In that code we declare a binding for the JavaScript `Math.sqrt` function,
  We use the `external` keyword (https://bucklescript.github.io/docs/en/intro-to-external) to declare it, and annotate its type as `float => float`.
  Finally, we indicate what it maps out to in JavaScript as the value of the external: "Math.sqrt".

  Then, we can simply use the newly declared `sqrt` function as any other fully type-safe function in Reason.

  Notice that we used the [@bs.val] attributes to indicate to the compiler that we are declaring a binding for a value.
  For more attributes you can read here: https://bucklescript.github.io/bucklescript/Manual.html#_ffi
*/

/*
  Lets take a look at amother simple example:
 */

[@bs.val]
external clog : string => unit = "console.log";
clog("heyo from js \(^_^)/ ");

[@bs.val] [@bs.scope "Math"] external random : unit => float = "";
Js.log(string_of_float(random())); /* random number */

/*
Lets take a look at what going on at the code above since its a bit different but simmilar to sqrt above:

[@bs.scope "Math"]:
In JS library, it is quite common to use a name as namespace, so istead of Using "Math.random" as previously
with `sqrt` we can use [@bs.scope "Math"] and just bind our `random` method

Note: Also instead of specifying an acutal name of our binding we just did: `""` that is becasue the same name `random`
after our external keyword, so it automaticlly bind to `random` function.
*/

/* 
There are a bunch of already bound and usefull functions.
For example `readFileAsUtf8Sync` by `bs-node` which we already have in our project.
*/
let someText = Node.Fs.readFileAsUtf8Sync("./src/test.txt");
Js.log(someText);

/*
Reason community created alot of other usefull binding such as the following:

https://github.com/glennsl/bs-jest  - jest binding for testing

https://github.com/reasonml/reason-react  - react binding
*/