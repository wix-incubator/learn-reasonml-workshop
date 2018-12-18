/* The most trivial function is `id`: */
let intId = (x: int) => x;
let stringId = (x: string) => x;
let boolId = (x: bool) => x;

/*
 If you think about it, we don't really care what type we're given.
 Look at the default type signature `id` has:
 */

let id = x => x;

/*
 `id` can take any type, marked as 'a, and returns a value of the same type.

 Since `x` is not altered directly, the compiler infers that `id` is polymorphic,
 meaning it can take any type. The moment we do with it something, the compiler
 infers the type by the function we apply:
  */
let successor = x => x + 1;

/* Take a look at `List.length`: */
List.length;

/*
 We don't need to know the type of elements in the list, we just traverse the structure.

 Reason's compiler guaranteed to be correct, fast, and will always infer the most general
 type possible.
  */