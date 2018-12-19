let runTests = (description, fn) => {
  Js.log("=============== Running Tests " ++ description ++ " =============");
  fn();
  Js.log("===============   End Tests   ==================");
};

let test = (description, fn) => {
  fn();
  Js.log(description ++ " " ++ {js|✔|js});
};