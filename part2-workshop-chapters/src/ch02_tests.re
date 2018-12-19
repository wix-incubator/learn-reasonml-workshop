/*
 Each upcoming chapter has tests written towards the end of the file.

 Simply run `npm run test` to verify you completed the chapter.
 */

let getSeven = () => assert(false);

TestUtils.runTests(__MODULE__, () =>
  TestUtils.test("should return 7", () =>
    assert(7 === getSeven())
  )
);