/*
 Tuple are convenient when the additional structure doesn't need
 its own name, e.g. cards in a deck.
 */

type rank =
  | Ace
  | King
  | Queen
  | Jack
  | Number(int);

type suit =
  | Club
  | Diamond
  | Heart
  | Spade;

type card = (rank, suit);

/*
 IMPLEMENT ME
 Write a function that given two cards returns the high one.
 A card is considered "higher" is its rank is higher.
 e.g. Ace > King, Jack > Number(10), etc.
 If their rank is equal,
 */
let highCard = (card1: card, card2: card) => failwith("implement me");

/*
 IMPLEMENT ME
 Write a function that returns true iff the given hand has a flush,
 i.e., all 5 card have the same suit.
 */
type hand = (card, card, card, card, card);
let hasFlush = (hand: hand) => failwith("implement me");

/* MAKE TESTS PASS */
let runTests = () => {
  Js.log("=============== Running Tests for " ++ __MODULE__);

  assert(
    (Number(9), Spade)
    === highCard((Number(9), Spade), (Number(4), Diamond)),
  );
  assert((Jack, Club) === highCard((Jack, Club), (Number(10), Heart)));
  assert((Ace, Heart) === highCard((Ace, Heart), (Ace, Diamond)));

  assert(
    false
    == hasFlush((
         (Ace, Club),
         (Ace, Heart),
         (Jack, Heart),
         (Number(9), Heart),
         (Number(2), Heart),
       )),
  );
  assert(
    true
    == hasFlush((
         (Ace, Heart),
         (Ace, Heart),
         (Jack, Heart),
         (Number(9), Heart),
         (Number(2), Heart),
       )),
  );

  Js.log("=============== End Tests ====================");
};

runTests();