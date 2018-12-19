/*
  It is sometimes useful to create a single mutable value. We can do this
  using a ref. We can create an int ref containing 0 as follows:
 */
let x = ref(0);

/*
  Then we can access the value in the ref using the ^ operator
 */
assert(0 == x^);

/*
  We update the ref using the := operator. So, we could increment our
  ref as follows:
 */
let () = x := x^ + 1;

/*
  Write a function minAndMax which returns a tuple containing the minimum
  and maximum values in a non-empty list of positive integers.

  Your function should iterate over the list and maintain refs of the minimum
  and maximum values seen so far.

  Hint: [max_int] or [min_int].
 */
let minAndMax = nums => assert(false);

/* MAKE TESTS PASS */

TestUtils.runTests(
  __MODULE__,
  () => {
    TestUtils.test("should min and max", () =>
      assert((2, 9) == minAndMax([5, 9, 2, 4, 3]))
    );
    TestUtils.test("should min and max", () =>
      assert((7, 34) == minAndMax([11, 15, 7, 34]))
    );
  },
);