/*
  As in most languages, you can define your own types.
  The keyword "type" introduces a type definition.

  One of the non-basic types in Reason is called the variant type.
  Variant types are similar to Enums in other languages. They are
  types which may take on multiple forms, where each form is marked
  by an explicit tag. A variant type is defined as follows:
 */
type color =
  | Red
  | Green
  | Blue;

/* Variants are very useful in combination with pattern matching */
let string_of_color = color =>
  switch (color) {
  | Red => "red"
  | Green => "green"
  | Blue => "blue"
  };

let favoriteColor = Blue;

Js.log("my favorite color is: " ++ string_of_color(favoriteColor));

/*
  Reason variants are in many ways more powerful than Enums because the different
  constructors of your variant can include data in them. Here's an example:
 */
type cardRank =
  | Ace
  | King
  | Queen
  | Jack
  | Number(int);

let queen = Queen;
let eight = Number(8);

let string_of_cardRank = rank =>
  switch (rank) {
  | Ace => "Ace"
  | King => "King"
  | Queen => "Queen"
  | Jack => "Jack"
  | Number(n) => string_of_int(n)
  };

/*
  Write a function that computes the score of a card (aces should score 11
  and face cards should score 10).
 */
let score = cardRank => assert(false);

/*
  Write a function that returns the succesor of the given card.
  for example:
  successor(Number(3)) === Number(4)
  successor(Queen) === King
 */
let successor = cardRank => assert(false);

/* MAKE TESTS PASS */
let runTests = () => {
  Js.log("=============== Running Tests for " ++ __MODULE__);

  assert(11 == score(Ace));
  assert(10 == score(Jack));
  assert(5 == score(Number(5)));

  assert(Number(4) == successor(Number(3)));
  assert(Jack == successor(Number(10)));
  assert(Ace == successor(King));
  assert(Number(2) == successor(Ace));

  Js.log("=============== End Tests ====================");
};

runTests();