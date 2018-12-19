/*
  Remember lists? Let's enreach our list functions
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

/*
 Write a function that return the nth element (at index n).
 e.g. :
 nth(1, ["a", "b", "c"]) == Some("b")
 nth(7, ["a", "b", "c"]) == None
 */
let rec nth = (n, list) => assert(false);

/*
 Write a function that receives a function ('a => bool) and a list of ('a)
 and returns the first element that returns true when applying the function to it
 e.g. :
 find(isEven, [3, 4, 5, 6, 7]) == Some(6)
 find(x => x == "", ["a", "b", "c", "d", "e"]) == None
 */
let rec find = (predicate, list) => assert(false);

/*
 Write a function that receives a function and a list and applies the function to each element
 e.g. :
 map(x => x * 2, [3, 4, 5, 6, 7]) == [6, 8, 10, 12, 14]
 map(String.length, ["qwe", "foo", "hello", "x", "avocado"]) == [3, 3, 5, 1, 7]
 */
let rec map = (fn, list) => assert(false);

/*
 Write a function that receives a function ('a => bool) and a list of ('a)
 and returns a list of all elements that returned true when applying the function to them
 e.g. :
 filter(isEven, [3, 4, 5, 6, 7]) == [4, 6]
 */
let rec filter = (predicate, list) => assert(false);

/*
 https://lodash.com/docs/4.17.11#reduce
 e.g.
 reduce((m, n) => m + n, 0, [1,2,3,4,5]) == 15
 */
let rec reduce = (fn, init, list) => assert(false);

TestUtils.runTests(
  __MODULE__,
  () => {
    let nums = [1, 2, 3, 4, 5, 6];
    let isEven = n => n mod 2 == 0;

    TestUtils.test("should find an element by predicate", () =>
      assert(find(isEven, nums) == Some(2))
    );
    TestUtils.test("should return None if element is not present", () =>
      assert(find(isEven, [1, 3, 5]) == None)
    );

    TestUtils.test("should get the nth element", () =>
      assert(nth(4, nums) == Some(5))
    );

    TestUtils.test("should map over a list", () =>
      assert(map(x => x * 2, nums) == [2, 4, 6, 8, 10, 12])
    );

    TestUtils.test("should filter a list by predicate", () =>
      assert(filter(isEven, nums) == [2, 4, 6])
    );

    TestUtils.test("should reduce a list", () =>
      assert(reduce((+), 0, nums) == 21)
    );
  },
);