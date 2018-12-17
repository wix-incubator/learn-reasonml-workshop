/*
  Another non-basic type in Reason is a tuple. A tuple is an ordered collection
  of values that can each be of a different type.
 */
type intStringAndChar = (int, string, char);

/* Tuples are created by supplying values in place of their basic types: */
let example: intStringAndChar = (5, "hello", 'A');

/* You can also extract the components of a tuple: */
let (i, s, c) = example;
assert(i == 5);
assert(s == "hello");
assert(c == 'A');

/*
  Consider a coordinate type containing the x and y values of a coordinate.
  Write a function that computes the sum of two coordinates.
 */
type coord3d = (int, int, int);

let add = (coord1: coord3d, coord2: coord3d) => {
  let (x1, y1, z1) = coord1;
  let (x2, y2, z2) = coord2;
  (x1 + x2, y1 + y2, z1 + z2);
};

/* TODO */
/* hint: Js.Math.sqrt */
type coord2d = (float, float);

let norm = (point: coord2d) => failwith("For you to implement");

/* TODO */
/* Write a function to extract the first element from a pair. */
/* e.g.: first((3,4)) === 3 */
let first = pair => failwith("For you to implement");

/* TODO */
/* Write functions to extract the first and second elements from a pair. */
/* e.g.: first((3,4)) === 4 */
let second = pair => failwith("For you to implement");

/* =========================================================== */
/* note: you can destructure in the function parameters:
     let add = ((x1, y1, z1), (x2, y2, z2)) => (x1 + x2, y1 + y2, z1 + z2);
   */
/* note: first and second are native: fst snd */
/* note: first and second are polymorphic */

fst(("a", "b"));
fst((3, 4));
fst((true, false));

/* note: you can pattern match on a tuple */
let has7 = tuple => {
  switch (tuple) {
  | (7, _)
  | (_, 7) => true
  | (_, _) => false
  };
};

/* ===== tests ===== */
let runTests = () => {
  Js.log(">>>>> running tests...");

  Js.log("add");
  assert((2, 3, 4) == add((1, 1, 1), (1, 2, 3)));

  Js.log("norm");
  assert(13. == norm((5., 12.)));

  Js.log("first");
  assert("foo" == first(("foo", "bar")));

  Js.log("second");
  assert("bar" == first(("foo", "bar")));

  Js.log("<<<<< All tests passed!");
};

runTests();