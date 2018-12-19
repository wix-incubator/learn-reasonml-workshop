/*
  Pattern matching lets us compare inputs to known values.
  Patterns following "|" are tested in order.
  On the first match, we use the result following "=>".
  The "_" pattern means "could be anything".
 */
let isSuperman = x =>
  switch (x) {
  | "Clark Kent" => true
  | _ => false
  };

/*
  IMPLEMENT ME
  Let's use our own pattern matching. Write a function that returns
  whether x is non zero by matching on x
 */
let nonZero = x => assert(false);

/*
 IMPLEMENT ME
 Write a function that returns `true` if the given char is a vowel (a, e, i, o, u)
 or false otherwise
 */
let isVowel = c => assert(false);

TestUtils.runTests(
  __MODULE__,
  () => {
    TestUtils.test("should say it's not zero", () =>
      assert(nonZero(7) == true)
    );
    TestUtils.test("should say it is zero", () =>
      assert(nonZero(0) == false)
    );
    TestUtils.test("should say it is a vowel", () =>
      assert(isVowel('e') == true)
    );
    TestUtils.test("should say it is not a vowel", () =>
      assert(isVowel('k') == false)
    );
  },
);