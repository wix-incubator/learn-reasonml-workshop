/*
  example of safeHead vs head?

  tail
  find
  nth
  last
  map
  filter
  fold/reduce
  ?
 */

let listOfSomeNumbers = [1, 2, 3, 4, 5, 6];
let rec head = list => assert(false);
let rec find = (predicate, list) => assert(false);
let rec nth = (n, list) => assert(false);
let rec map = (fn, list) => assert(false);
let rec filter = (predicate, list) => assert(false);
let rec reduce = (fn, init, list) => assert(false);

let isEven = n => n mod 2 == 0;

assert(head([]) == None);
assert(head(listOfSomeNumbers) == Some(1));
assert(find(isEven, listOfSomeNumbers) == Some(2));
assert(find(isEven, [1, 3, 5]) == None);
assert(nth(4, listOfSomeNumbers) == Some(5));
assert(map(x => x * 2, listOfSomeNumbers) == [2, 4, 6, 8, 10, 12]);
assert(filter(isEven, listOfSomeNumbers) == [2, 4, 6]);
assert(reduce((a, c) => a + c, 0, listOfSomeNumbers) == 21);