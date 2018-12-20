let runTests = (description, fn) => {
  Js.log("=============== Running Tests " ++ description ++ " =============");
  fn();
  Js.log("===============   End Tests   ==================");
};
let lightRed = x => {j|\u001b[91m$x\u001b[39m|j};

let lightGreen = x => {j|\u001b[92m$x\u001b[39m|j};

let test = (description, fn) => {
  try (fn()) {
  | Assert_failure((s, n1, n2)) =>
    Js.log(description ++ " " ++ lightRed({js|✘|js}));
    Js.log(lightRed({j|$s,line:$n1,ch:$n2|j}));
    raise(Exit);
  };
  Js.log(description ++ " " ++ lightGreen({js|✔|js}));
};