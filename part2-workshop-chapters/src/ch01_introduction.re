/*
  To compile your code, run in a terminal session in the root directory

    $ npm run build

  The code below compiles into *filename*.bs.js and our code should look like this:

    console.log("Hello, World!!");

  For convenience you can build either whenever you change the code by saving your changes or from by running with watch mode on ($ npm run start).

*/
print_endline("Hello, World!!");

/*
    Lets take a look on how we are going to run our tests:
    We will have a simple fuction that we need to implememnt in order for our test to pass

    Try runing $ npm t in your console - you should get an error with something like this:
    
    ```
    /Users/alexko/Projects/PersonalPlayGround/workshops/reasonml/learn-reasonml-workshop/workshop-atoms/src/01-hello_world/introduction.bs.js:14
        throw [
        ^
    Assert_failure,-10,introduction.re,37,4
    ```

    The first row goes right into our compiled JS file `introduction.bs.js:14` this is unintersting for us since even though it looks readable
    we want to work with the code we written.

    But the second row is relevent for us:
    "Assert_failure,-10,introduction.re,37,4" - Basically it translates to - We have a failed assertion in file `introduction.re` line 37 col 4

    Now lets make the test pass!
*/

let truthy = () => assert(false);/* For you to implement */

let runTests = () => {
    Js.log("=============== Running Tests ==================")
    assert (truthy()); 
    Js.log("===============   End Tests   ==================")
}

runTests();