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
x := x^ + 1;
assert(1 == x^);

/*
  You can write imperative code when it makes more sense using a for loop!
  Let's take a look at a different implementation of the factorial function:
 */
let factorialWithForLoop = n => {
  let result = ref(1);

  for (i in 1 to n) {
    result := result^ * i;
  };

  result^;
};
assert(120 == factorialWithForLoop(5));

/*
  Or you can use a while loop if you fancy!
 */
let factorialWithWhileLoop = n => {
  let i = ref(1);
  let result = ref(1);

  while (i^ <= n) {
    result := result^ * i^;
    i := i^ + 1;
  };

  result^;
};
assert(120 == factorialWithWhileLoop(5));

/*
  Write a function minAndMax which returns a tuple containing the minimum
  and maximum values in a non-empty list of positive integers.

  Your function should iterate over the list and maintain refs of the minimum
  and maximum values seen so far.

  Hint: [max_int] or [min_int].
 */
let minAndMax = nums => assert(false);

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