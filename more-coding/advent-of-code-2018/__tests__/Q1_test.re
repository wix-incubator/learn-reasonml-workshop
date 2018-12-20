open Jest;

describe("Q1a tests: ", () => {
  open Expect;

  let testInputs = [|
    "+1\n-2\n+3\n+1",
    "+1\n+1\n+1",
    "+1\n+1\n-2",
    "-1\n-2\n-3",
  |];

  let testResults = [|3, 3, 0, (-6)|];

  for (ii in 0 to Array.length(testInputs) - 1) {
    test({j|case $ii|j}, () =>
      expect(Q1.A.solveFor(testInputs[ii])) |> toBe(testResults[ii])
    );
  };

  test("AoC input", () => {
    let aocInput = Node.Fs.readFileAsUtf8Sync("./inputs/Q1.input");

    let result = aocInput |> Q1.A.solveFor;

    expect(result) |> toBe(466);
  });
});

describe("Q1b tests: ", () => {
  open Expect;

  let testInputs = [|
    "+1\n-1",
    "+3\n+3\n+4\n-2\n-4",
    "-6\n+3\n+8\n+5\n-6",
    "+7\n+7\n-2\n-7\n-4",
  |];

  let testResults = [|0, 10, 5, 14|];

  for (ii in 0 to Array.length(testInputs) - 1) {
    test({j|case $ii|j}, () =>
      expect(Q1.B.solveFor(testInputs[ii])) |> toBe(testResults[ii])
    );
  };

  test("AoC input", () => {
    let aocInput = Node.Fs.readFileAsUtf8Sync("./inputs/Q1.input");

    let result = aocInput |> Q1.B.solveFor;

    expect(result) |> toBe(750);
  });
});