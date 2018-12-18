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
let runTests = () => {
  Js.log("=============== Running Tests for " ++ __MODULE__);

  assert(1 == safeDivide(~dividend=3, ~divisor=2));
  assert(0 == safeDivide(~dividend=3, ~divisor=0));

  assert(Some(0) == safe_int_of_char('0'));
  assert(Some(5) == safe_int_of_char('5'));
  assert(Some(9) == safe_int_of_char('9'));
  assert(None == safe_int_of_char('a'));
  assert(None == safe_int_of_char('?'));

  Js.log("=============== End Tests ====================");
};

runTests();