/*
 Compilation
 ===========

 In `.re` files we write code in Reason syntax which we then compile to javascript.
 Run the following command in a terminal
 ```
 $ npm run build
 ```
 and look in the `.bs.js` file created with the same file name

 The following line was compiled into `console.log("Hello, World!")
 */
Js.log("Hello, World!!");

/*
 Run the following command in a separate terminal window:
 ```
 $ npm run start
 ```

 This will watch your files and re-build when saving.
 */

/*
 Fomatting
 =========

 Reason has a powerful formatting tool which was the inspiration for PrettierJS.

 The `reason-vscode` extension uses it out of the box when you format the file.
 Just press `Option + Shift + F` and see how the differnce.

 Use it!
 */
Js.log(
  "Hello again!"
  
);