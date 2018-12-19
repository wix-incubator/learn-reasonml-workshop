/*
  Another non-basic type in Reason is a tuple. A tuple is an ordered collection
  of values, with fixed length, that can each be of a different type.
 */
type intStringAndChar = (int, string, char);

/* Tuples are created by supplying values in place of their basic types: */
let example: intStringAndChar = (5, "hello", 'A');

/* You can also extract the components of a tuple: */
let (i, s, c) = example;
assert(i == 5);
assert(s == "hello");
assert(c == 'A');

/* A typical example using tuples would be a function that adds 3d coordinates */
let add3d = (point1, point2) => {
  let (x1, y1, z1) = point1;
  let (x2, y2, z2) = point2;
  (x1 + x2, y1 + y2, z1 + z2);
};
assert((3, 4, 5) == add3d((1, 1, 1), (2, 3, 4)));

/*
 IMPLEMENT ME
 hint: Js.Math.sqrt
 */
type coord2d = (float, float);
let norm = (point: coord2d) => assert(false);

/*
 IMPLEMENT ME
 Write a function to extract the first element from a pair.
 e.g.: first((3,4)) === 3
 */
let first = pair => assert(false);

/*
 IMPLEMENT ME
 Write functions to extract the first and second elements from a pair.
 e.g.: second((3,4)) == 4
 */
let second = pair => assert(false);

/* NOTE: you can destructure in the function parameters: */
/* let add = ((x1, y1, z1), (x2, y2, z2)) => (x1 + x2, y1 + y2, z1 + z2); */

/* NOTE: first and second are native: fst snd */
/* NOTE: first and second are polymorphic */

fst(("a", "b"));
fst((3, 4));
fst((true, false));

/* NOTE: you can pattern match on a tuple */
let has7 = tuple => {
  switch (tuple) {
  | (7, _)
  | (_, 7) => true
  | (_, _) => false
  };
};

/* MAKE TESTS PASS */
let runTests = () => {
  Js.log("=============== Running Tests for " ++ __MODULE__);

  assert(5. == norm((3., 4.)));
  assert(13. == norm((5., 12.)));
  assert("foo" == first(("foo", "bar")));
  assert("bar" == first(("foo", "bar")));

  Js.log("=============== End Tests ====================");
};

runTests();