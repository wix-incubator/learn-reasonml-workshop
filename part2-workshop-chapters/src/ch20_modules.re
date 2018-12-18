/*
 Reason, like many other languages, provides a way to encapsulate and organize code
 into modules. Modules are available everywhere once defined in the project. Recall
 the way we've been printing out strings:

 ```
   Js.log("hello world!")
 ```

 This is actually invoking the `log` function defined in the `Js` module which exposes
 functions normally available in the javascript environment.

 Take a look at the Example module defined in the file `./Example.re`. It's top level
 definitions are available from anywhere in the project like so:
 */

Example.sayHi();
assert(true == Example.isVowel('a'));
assert(false == Example.isVowel('b'));

/* This includes the previous chapters as well: */
/* assert(4 == Ch02_basic_syntax.intAverage(2, 6)) */

/*
  You can also nest a module within a module using the `module` keyword:
 */
module Inner = {
  let even = n => n mod 2 == 0;
};

assert(true == Inner.even(106));
assert(false == Inner.even(7));

/*
  By default, the `Pervasives` module (https://reasonml.github.io/api/Pervasives.html)
  is opened and all its methods are available without prefixing them, e.g. you can simply
  invoke the function `int_of_string` instead of `Pervasives.int_of_string`.

  List of standard library modules at https://reasonml.github.io/api/index_modules.html

  JavaScript modules (Js, Node, Dom) are available to us thanks to BuckleScript
  (devDependency of `bs-platform`) which compiles our `.re` files to `.bs.js` files.
  Read more at https://bucklescript.github.io/docs/en/stdlib-overview
 */

/*
  If you need a data structure or library, most chances are there exists a module which
  is already available or you just need to `npm install`. Read more at:
  https://reasonml.github.io/docs/en/libraries

  For example, the list functions we implemented in the previous chapter, and many more
  are available in the `List` module
 */
let nums = [4, 5, 6, 7];

assert(4 == List.length(nums));
assert(true == List.mem(5, nums));
assert(false == List.mem(17, nums));
assert([7, 6, 5, 4] == List.rev(nums));


/*
   MAKE ME PASS
   Uncomment the following tests, and make them pass by adding the appropriate
   modules and functions
 */
/*
 assert(true == Inner.odd(47))
 assert(false == Inner.odd(48))
 assert(true == Example.Chars.isDigit('3'))
 assert(false == Example.Chars.isDigit('?'))
 */
