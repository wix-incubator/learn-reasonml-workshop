/*
 Many languages have a concept of "Null", which describes that some data is
 absent. In Reason, we can model the presence/absence data using ordinary
 variants.

 Note: we're defining the [option] type here to show you that it isn't magic.
 In real life you would always use the [option] type provided by the standard
 library.
 */
type option('a) =
  | None
  | Some('a);

/*
 An [option('a)] is either [None], meaning absence of data, or [Some x]
 meaning the data exists, and that data specifically is [x]. Here's an
 example:
 */
let whatNumberAmIThinking = (myNumber: option(int)) =>
  switch (myNumber) {
  | None => "I'm not thinking of any number!"
  | Some(number) => "My number is: " ++ string_of_int(number)
  };

assert(whatNumberAmIThinking(None) == "I'm not thinking of any number!");

assert(whatNumberAmIThinking(Some(7)) == "My number is: 7");

/* Explicitly encoding a None value can make business logic clear: */
let renderUserName = user => {
  switch (user) {
  | None => "Anonymous"
  | Some(name) => name
  };
};

/*
 Implement the function [safeDivide(~dividend, ~divisor)], which takes two
 ints and returns an int option. It should return None if [divisor = 0], and
 otherwise returns [Some(x)] where [x] is the division result
 */
let safeDivide = (~dividend, ~divisor) => assert(false);

/* IMPLEMENT ME */
let safe_int_of_char = c => assert(false);

/* MAKE TESTS PASS */

TestUtils.runTests(
  __MODULE__,
  () => {
    TestUtils.test("should safely calculate modulo", () =>
      assert(Some(1) == safeDivide(~dividend=3, ~divisor=2))
    );
    TestUtils.test("should safelycalculate modulo", () =>
      assert(Some(0) == safeDivide(~dividend=3, ~divisor=0))
    );
    TestUtils.test("should safely get the char of a number", () =>
      assert(Some(5) == safe_int_of_char('5'))
    );
    TestUtils.test("should safely get the int of a letter", () =>
      assert(None == safe_int_of_char('a'))
    );
    TestUtils.test("should safely get the int of a symbol", () =>
      assert(None == safe_int_of_char('?'))
    );
  },
);