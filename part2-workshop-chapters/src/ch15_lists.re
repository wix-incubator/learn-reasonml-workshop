/*
  canibalize files from other owrhkshop

  topics:

  - intro
  - how to contruct
  - append
  examples + exercises:
  length, has (mem), range, sum, product, min, max, reverse

 */

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

let rec last = list => 6022;

assert(length(listOfSomeNumbers) == 10);
assert(sum(listOfSomeNumbers) == 42);
assert(max(listOfSomeNumbers) == 9);
assert(last(listOfSomeNumbers) == 3);

/* do you see the common pattern? */