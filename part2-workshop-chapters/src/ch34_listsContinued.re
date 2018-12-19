/*
 Remember lists? Let's inreach our list functions
 This time we'll be using options(meaning using None and Some)

 Here is an example for a `head` function
 Now you go and implement the rest
  */

let listOfSomeNumbers = [1, 2, 3, 4, 5, 6];
let head = list =>
  switch (list) {
  | [] => None
  | [hd, ..._] => Some(hd)
  };
let rec find = (predicate, list) => assert(false);
let rec nth = (n, list) => assert(false);
let rec map = (fn, list) => assert(false);
let rec filter = (predicate, list) => assert(false);
let rec reduce = (fn, init, list) => assert(false);

let isEven = n => n mod 2 == 0;

TestUtils.runTests(
  __MODULE__,
  () => {
    TestUtils.test("should return None for empty lists", () =>
      assert(head([]) == None)
    );
    TestUtils.test("should return first element", () =>
      assert(head(listOfSomeNumbers) == Some(1))
    );

    TestUtils.test("should find an element", () =>
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
    TestUtils.test("should a list", () =>
      assert(filter(isEven, listOfSomeNumbers) == [2, 4, 6])
    );
    TestUtils.test("should reduce a list", () =>
      assert(reduce((a, c) => a + c, 0, listOfSomeNumbers) == 21)
    );
  },
);