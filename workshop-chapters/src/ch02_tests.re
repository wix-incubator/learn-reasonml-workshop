/*
 Each upcoming chapter has tests written towards the end of the file.

 Simply run `npm run test` to run all tests in the project
 
 You can also run the specific file using node, e.g. to test this file, run:
 ```
  $ node ./src/ch02_tests.bs.js
 ```
 */

/* IMPLEMENT ME */
let getSeven = () => assert(false);

TestUtils.runTests(__MODULE__, () =>
  TestUtils.test("should return 7", () =>
    assert(7 === getSeven())
  )
);