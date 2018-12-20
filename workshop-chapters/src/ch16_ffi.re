/* 
  FFI / Interop (https://reasonml.github.io/docs/en/external)
  ===================
  "FFI" (foreign function interface), or simply "interop" (for "interoperability") is how Reason 
  communicates with other languages (e.g JavaScript, C).

  There are over 600,000 packages on NPM and if you’re writing Reason and targeting JavaScript as output 
  there’s a good chance you need to use a few JavaScript packages, so integrating with the JavaScript 
  ecosystem in general is very important and a big selling point of the (Reason, Bucklescript) duo.

  Lets take a look at the following code:
*/

[@bs.val]
external sqrtFromJs : float => float = "Math.sqrt";
assert(4. == sqrtFromJs(16.0))

/* 
  We declared a new Reason value named `sqrtFromJs`. It's type is `float => float`, and from here on we can
  use it like any other value. During compilation, the `[@bs.val]` annotation and `external` keyword tell the 
  BuckleScript compiler that this is an external value, and it's implementation is the `Math.sqrt` function in
  javascript. This is called a binding, and npm has many bindings already written for common libraries e.g. Jest, 
  Node, the browser Dom, React, etc.

  Read more at: 
  https://bucklescript.github.io/docs/en/intro-to-external
 */

/* Lets take a look at another example: */
[@bs.val]
external consoleLog : string => unit = "console.log";
consoleLog("heyo from js \(^_^)/ ");

/* 
  There exist many BuckleScript annotations to make it easy to write bindings. For example, you can use 
  the `[@bs.scope]` annotation instead of writing the namespace explicitly
 */
[@bs.val] [@bs.scope "Math"] 
external random : unit => float = "random";
Js.log(string_of_float(random())); /* == random number */

/* There are a bunch of built-in bindings you are probably familiar with. For example: */
Dom.Storage.getItem;
Node.Fs.readFileAsUtf8Sync;
Js.log;

/* 
If you try to go to their definition (Cmd + left-click) you can see the BuckleScript bindings for those 
modules. For more information on bindings go to: https://bucklescript.github.io/bucklescript/Manual.html#_ffi 

Reason community created alot of other usefull binding such as the following:

https://github.com/glennsl/bs-jest  - jest binding for testing

https://github.com/reasonml/reason-react  - react binding

and much more...you can take a look here : https://github.com/reasonml-community/
*/