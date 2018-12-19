/*
 Remember lists? Let's inreach our list functions
 This time we'll be using options(meaning using None and Some)

 Here is an example for a `head` function

  */

let head = list =>
  switch (list) {
  | [] => None
  | [hd, ..._] => Some(hd)
  };

assert(head([]) == None);
assert(head([1, 2, 3]) == Some(1));

/* Now you go and implement the rest */

let listOfSomeNumbers = [1, 2, 3, 4, 5, 6];

/* find - should find an element by predicate */
let rec find = (predicate, list) => assert(false);

/* nth - should get the nth element */
let rec nth = (n, list) => assert(false);

/* map - should map over a list */
let rec map = (fn, list) => assert(false);

/* filter - should filter a list  by predicate */
let rec filter = (predicate, list) => assert(false);

/* reduce - should reduce a list */
let rec reduce = (fn, init, list) => assert(false);

let isEven = n => n mod 2 == 0;

TestUtils.runTests(
  __MODULE__,
  () => {
    TestUtils.test("should find an element by predicate", () =>
      assert(find(isEven, listOfSomeNumbers) == Some(2))
    );
    TestUtils.test("should return None if element is not present", () =>
      assert(find(isEven, [1, 3, 5]) == None)
    );

    TestUtils.test("should get the nth element", () =>
      assert(nth(4, listOfSomeNumbers) == Some(5))
    );

    TestUtils.test("should map over a list", () =>
      assert(map(x => x * 2, listOfSomeNumbers) == [2, 4, 6, 8, 10, 12])
    );

    TestUtils.test("should filter a list by predicate", () =>
      assert(filter(isEven, listOfSomeNumbers) == [2, 4, 6])
    );

    TestUtils.test("should reduce a list", () =>
      assert(reduce((a, c) => a + c, 0, listOfSomeNumbers) == 21)
    );
  },
);