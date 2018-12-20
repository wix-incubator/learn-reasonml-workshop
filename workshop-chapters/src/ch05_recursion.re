/*
  Remember that functions can call functions?
  They can call themselves too. But only with a special keyword.

  Try changing "let rec" to "let" and you'll see the following compiler error:
  "The value addEveryNumberUpTo can't be found"
 */
let rec addEveryNumberUpTo = x => {
  /* make sure we don't call this on negative numbers! */
  assert(x >= 0);
  switch (x) {
  | 0 => 0
  | _ => x + addEveryNumberUpTo(x - 1)
  };
};

/*
  Let's write a function to multiply every number up to x.
  Remember: [factorial 0] is 1
 */
let rec factorial = x => {
  assert(x >= 0);

  /* PATTERN MATCH HERE! and delete the `assert(false)` */
  assert(false);
};

TestUtils.runTests(
  __MODULE__,
  () => {
    TestUtils.test("should calculate factorial(0)", () =>
      assert(factorial(0) == 1)
    );
    TestUtils.test("should calculate factorial(5)", () =>
      assert(factorial(3) == 6)
    );
    TestUtils.test("should calculate factorial(120)", () =>
      assert(factorial(5) == 120)
    );
  },
);