# Installing ReasonML

## Editor Plugin

Currently there are two common extensions to choose from:
  * [reason-vscode](https://marketplace.visualstudio.com/items?itemName=jaredly.reason-vscode)
  * [OCaml and Reason IDE](https://marketplace.visualstudio.com/items?itemName=freebroccolo.reasonml)

We recommend installing `reason-vscode`:
  * It's the one stated in the official [ReasonML docs](https://reasonml.github.io/docs/en/editor-plugins#officially-supported-editors)
  * It's installation process seems simpler and with less dependencies
  * It is being actively 

Just add the extension to VS Code and should work out of the box. We highly recommend setting your editor's `formatOnSave` settings to `true` (In User Settings).

## Starting from scratch

### Short version:

```bash
mkdir my-new-reson-project
cd my-new-reson-project
npm i --save-dev bs-platform
./node_modules/.bin/bsb -init . -theme basic-reason
```

**Note:** to get much nicer error messages, add the following to your `bsconfig.js`: 
```json
  ...
  "bsc-flags": ["-bs-super-errors"]
}
```

### TL;DR

#### *What's the deal the the pretty error messages?* 
read [here](https://reasonml.github.io/blog/2017/08/25/way-nicer-error-messages.html)

#### *What's the deal with the weird installation process?* 
The official installation process recommends install `bs-platform` globally, and `bsb -init` creates a symlink to the global installation. In order to avoid weird setup conditions and version conflicts, this installation process makes sure to use the `bs-platform` which is locally installed in your project.

