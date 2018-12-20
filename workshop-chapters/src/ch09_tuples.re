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
 Write a function that generates a string from a point.
 e.g.:
 "(3., 4.)" == string_of_point((3., 4.))
 */
type coord2d = (float, float);
let string_of_point = (point: coord2d) => assert(false);

/*
 IMPLEMENT ME
 Write a function to extract the first element from a pair.
 e.g.: first((3,4)) === 3
 */
type pair = ('a, 'a)
let first = pair : pair => assert(false);

/*
 IMPLEMENT ME
 Write functions to extract the first and second elements from a pair.
 e.g.: second((3,4)) == 4
 */
let second = pair : pair => assert(false);

/* NOTE: just like in javascript you can destructure in the function parameters: */
/* let add2d = ((x1, y1), (x2, y2)) => (x1 + x2, y1 + y2); */

/* NOTE: first and second come out of the box and are named: fst snd */
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

TestUtils.runTests(
  __MODULE__,
  () => {
    TestUtils.test("should convert the point to a string", () =>
      assert("(3., 4.)" == string_of_point((3., 4.)))
    );
    TestUtils.test("should convert the point to a string", () =>
      assert("(5., 12.)". == string_of_point((5., 12.)))
    );
    TestUtils.test("should get first from a tuple", () =>
      assert("foo" == first(("foo", "bar")))
    );
    TestUtils.test("should get second from a tuple", () =>
      assert("bar" == second(("foo", "bar")))
    );
  },
);