let sayHi = () => Js.log("hi");

let isVowel = c =>
  switch (c) {
  | 'a'
  | 'e'
  | 'i'
  | 'o'
  | 'u' => true
  | _ => false
  };