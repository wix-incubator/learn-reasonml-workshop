let runTests = (description, fn) => {
  Js.log("=============== Running Tests " ++ description ++ " =============");
  fn();
  Js.log("===============   End Tests   ==================");
};

let test = (description, fn) => {
  try (fn()) {
  | exn =>
    Js.log(description ++ " " ++ {js|✘|js});
    raise(exn);
  };
  Js.log(description ++ " " ++ {js|✔|js});
};