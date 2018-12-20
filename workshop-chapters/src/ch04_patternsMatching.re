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
 Let's use our own pattern matching. Write a function that returns `true` 
 if the given string is a vowel (a, e, i, o, u) or false otherwise
 */
let isVowel = str => assert(false);

/*
  IMPLEMENT ME
  A cool thing about pattern matching is that you can match on numbers as well!
  Write a function that returns whether `n` is non zero by matching on `n`
 */
let nonZero = n => assert(false);

TestUtils.runTests(
  __MODULE__,
  () => {
    TestUtils.test("should say it is a vowel", () =>
      assert(isVowel("e") == true)
    );
    TestUtils.test("should say it is not a vowel", () =>
      assert(isVowel("k") == false)
    );
    TestUtils.test("should say it's not zero", () =>
      assert(nonZero(7) == true)
    );
    TestUtils.test("should say it is zero", () =>
      assert(nonZero(0) == false)
    );
  },
);