/*
 Compilation
 ===========

 In `.re` files we write code in Reason syntax which we then compile to javascript.
 The javascript compiler is called BuckleScript, and the output files are commonly
 suffixed with `bs`. e.g. `foobar.re` is compiled to `foobar.bs.js`

 Run the following command in a terminal
 ```
 $ npm run build
 ```
 
 If finished successfully, all `.re` files in the project have been compiled and 
 the output files are located next to them in the directory. 
 
 Now look in the `ch01_introduction.bs.js` file created. The following line was 
 compiled into `console.log("Hello, World!")
 */
Js.log("Hello, World!!");

/*
 Run the following command in a separate terminal window:
 ```
 $ npm run start
 ```

 This will watch your files and re-build when saving.

 NOTE: turn on `autosave` in VS Code for this to work smoothly, or remember to
 save in order to trigger a build
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