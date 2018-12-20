/*
  Reason natively supports linked lists as part of the language.
  Lists are commonly referred to as having heads and tails.
  The head is the first element of the linked list
  The tail is everything else.

  [] means "the empty list".
  [hd, ...tl] means "the element hd (head) added to the front of the list tl (tail)".

  When matching on a list, it's either empty or non-empty. To say it another
  way, it's either equal to [] or equal to ([hd, ...tl]) where hd is the first
  element of the list and tl is all the rest of the elements of the list
  (which may itself be empty).

  This function computes the length of a list.
 */
let rec length = lst =>
  switch (lst) {
  | [] => 0
  | [hd, ...tl] => 1 + length(tl)
  };

/*
IMPLEMENT ME 
Write a function to add up the elements of a list by matching on it. 
*/
let rec sum = intList => {
  assert(false);
};

/*
  The signature for the append operator is
  let (@) : (list('a), list('a)) => list('a)

  It's an infix operator.
 */
let listAppend = (list1, list2) => list1 @ list2;

/*
  The way you put something on the head to the list uses the same kind of
  syntax for matching on lists. This is called the spread syntax.
 */
let newHead = (hd, rest) => [hd, ...rest];

/*
 Write a function that receives a list of ints and multiplies them
 e.g. product([2, 5, 7]) == 70
 */
let rec product = intList => {
  assert(false);
};

/*
 Write a function that receives a list of ints and returns the maximum int
 e.g. maxElement([2, 15, 8]) == 15
 */
let rec maxElement = intList => {
  assert
    (false);
    /* For an empty list, you can use `min_int` */
};

/*
 Write a function that receives a list of ints and returns the minimum int
 e.g. minElement([2, 15, 8]) == 2
 */
let rec minElement = intList => {
  assert(false);
};

/*
 Write a function that receives a list of ints, converts them to strings and concatinates
 the strings together
 e.g. join([2, 15, 8]) == "2158"

 Hint: string_of_int
 */
let rec join = intList => {
  assert(false);
};

/*
 Write a function that receives a list, and returns a new list in reversed order.
 e.g. reverse([2, 3, 4, 5]) == [5, 4, 3, 2]
 */
let rec reverse = list => assert(false);

TestUtils.runTests(
  __MODULE__,
  () => {
    let testInput = [3, 6, 4, 7, 1, 9, 5];

    TestUtils.test("should calculate sum of the list", () =>
      assert(sum(testInput) == 35)
    );
    TestUtils.test("should get max element in a list", () =>
      assert(maxElement(testInput) == 9)
    );
    TestUtils.test("should get min element in a list", () =>
      assert(minElement(testInput) == 1)
    );
    TestUtils.test("should join the list to a string", () =>
      assert(join(testInput) == "3647195")
    );
    TestUtils.test("should return reversed list", () =>
      assert(reverse(testInput) == [5, 9, 1, 7, 4, 6, 3])
    );
  },
);