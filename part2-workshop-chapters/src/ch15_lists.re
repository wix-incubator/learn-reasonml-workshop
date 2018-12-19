/*
 Reason natively supports linked lists as part of the language.
 Lists are commonly referred to as having heads and tails.
 The head is the first element of the linked list
 The tail is everything else.

 [] means "the empty list".
 [hd, ...tl] means "the element hd added to the front of the list tl".
 */

/*
 concatinating string
 List.append or @
 */

let listOfSomeNumbers = [0, 5, 0] @ List.append([5, 7, 5], [3, 5, 9, 3]);
assert(listOfSomeNumbers == [0, 5, 0, 5, 7, 5, 3, 5, 9, 3]);

/*
 Take a look at the following function
  `join` takes a list of ints and returns a concatanation of the elements in a string
  */

let rec join = list =>
  switch (list) {
  | [] => ""
  | [hd, ...tl] => string_of_int(hd) ++ join(tl)
  };

assert(join(listOfSomeNumbers) == "0505753593");

/* now you implement*/

let rec length = list => 314;

let rec sum = list => 271;

let rec max = list => 161;

let rec reverse = list => [];

let rec last = list => 6022;

TestUtils.runTests(
  __MODULE__,
  () => {
    TestUtils.test("should get list length", () =>
      assert(length(listOfSomeNumbers) == 10)
    );
    TestUtils.test("should calculate sum of the list", () =>
      assert(sum(listOfSomeNumbers) == 42)
    );
    TestUtils.test("should get max element in a list", () =>
      assert(max(listOfSomeNumbers) == 9)
    );
    TestUtils.test("should return reversed list", () =>
      assert(reverse(listOfSomeNumbers) == [3, 9, 5, 3, 5, 7, 5, 0, 5, 0])
    );
    TestUtils.test("should return last element in a list", () =>
      assert(last(listOfSomeNumbers) == 3)
    );
  },
);
/* do you see the common pattern in your implementation? */