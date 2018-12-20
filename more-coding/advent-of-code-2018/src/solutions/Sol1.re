/* Solutions for Q1 */

module A = {
  let solveFor = input => {
    input
    |> Js.String.split("\n")
    |> Array.map(Js.String.trim)
    |> Array.map(int_of_string)
    |> Array.fold_left((+), 0);
  };
};

module B = {
  let rec findFirstRepeatingFrequency =
          (seenFrequencies, changes, changeIndex, freq) =>
    if (Belt.Set.Int.has(seenFrequencies, freq)) {
      freq;
    } else {
      let newIndex = changeIndex + 1;
      findFirstRepeatingFrequency(
        Belt.Set.Int.add(seenFrequencies, freq),
        changes,
        newIndex >= Array.length(changes) ? 0 : newIndex,
        freq + changes[changeIndex],
      );
    };

  let solveFor = input => {
    let changes =
      input
      |> Js.String.split("\n")
      |> Array.map(Js.String.trim)
      |> Array.map(int_of_string);

    findFirstRepeatingFrequency(Belt.Set.Int.empty, changes, 0, 0);
  };
};