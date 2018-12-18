/*
  Reason, like many other languages, provides a way to interact with code via
  interfaces. This allows implementation details to be hidden away, and for
  grouped units of code to restrict how they are used.

  You can not only write the implementation of a module as we covered in a
  previous chapter, but you can define an interface (called signature) for it as well.

  Here's an example of a module signature coupled with an implementation. The
  signature is wrapped in curly braces similar to the implementation.
 */

module Vowels = {
  let a = 'a';
  let e = 'e';
  let i = 'i';
  let o = 'o';
  let u = 'u';
};

assert('a' == Vowels.a);
assert('e' == Vowels.e);
assert('i' == Vowels.i);
assert('o' == Vowels.o);
assert('u' == Vowels.u);

/* Same as: */
module Vowels2: {
  let a: char;
  let e: char;
  let i: char;
  let o: char;
  let u: char;
} = {
  let a = 'a';
  let e = 'e';
  let i = 'i';
  let o = 'o';
  let u = 'u';
};

assert('a' == Vowels2.a);
assert('e' == Vowels2.e);
assert('i' == Vowels2.i);
assert('o' == Vowels2.o);
assert('u' == Vowels2.u);

/* If a signature is defined, only the signature is exported */
module PartialVowels: {
  let a: char;
  let e: char;
} = {
  let a = 'a';
  let e = 'e';
  let i = 'i';
  let o = 'o';
  let u = 'u';
};

assert('a' == PartialVowels.a);
assert('e' == PartialVowels.e);
/* This cause compile errors */
/* assert('i' == PartialVowels.i); */
/* assert('o' == PartialVowels.o); */
/* assert('u' == PartialVowels.u); */

/*
 Module signatures are especially useful in decoupling from implementation, by using "abstract" types.
 Here's an example of declaring an "abstract" type - one where the definition of the type is not exposed.
 */
module AbstractNaturalNumber: {
  /* We do not let the user know that [t] is an integer */
  type t;
  /* This function allows [t] to be coerced into an integer */
  let toInt: t => int;
  /* Users need some way to start with some [t] */
  let zero: t;
  let one: t;
  /* Let them do something with the [t]*/
  let add: (t, t) => t;
} = {
  type t = int;
  let toInt = x => x;
  let zero = 0;
  let one = 1;
  let add = (+);
};

/* The following line won't compile since `string_of_int` is of type `int => string`, but `zero` is of type `AbstractNaturalNumber.t` */
/* Js.log(string_of_int(AbstractNaturalNumber.zero)) */

assert(0 == AbstractNaturalNumber.toInt(AbstractNaturalNumber.zero));
assert(1 == AbstractNaturalNumber.toInt(AbstractNaturalNumber.one));

/* Here's an example of adding 2 and 2 */
let opaqueOne = AbstractNaturalNumber.one;
let opaqueAdd = AbstractNaturalNumber.add;
let two = opaqueAdd(opaqueOne, opaqueOne);

let four = opaqueAdd(two, two);
let fourInt = AbstractNaturalNumber.toInt(four);

assert(fourInt == 4);





/* module GmailAddress: {
     type t;

     let fromString : string => option(t);
   } = {
     type t = string;

     let fromString = s => {
       let len = String.length(s);
       let isGmailAddress = StringLabels.sub(s, ~pos=len-10, ~len=10);
       /* Js.Re.fromString   (".*@gmail.com") */
     }
   }; */

/* let sendEmail = (email : EmailAddress.t) => {
     /* no need for defensive code */
   } */

module String20: {
  type t;

  let toString: t => string;
  let createFromString: string => option(t);

  let length : t => int;
} = {
  type t = string;

  let length = s => String.length(s);

  let toString = s => s;

  let createFromString = s =>
    if (String.length(s) > 20) {
      None;
    } else {
      Some(s);
    };
};

/* let name: string = "qweqwe"; */
/* let name: String20.t = "qweqwe"; */
/*
 let saveNameToDb = (name : String10.t) => {
   Js.log("This function cannot be called with strings!!!! ");
 }

 let sanitizedName = String10.fromString("qweqweqweqweqweqweqweqweqwe") */

type userName = {
  first: String20.t,
  last: String20.t,
};

let saveUserNameToDb = (userName: userName) => {/* going to save to db... */};