# Learn ReasonML Workshop

- what is Reason? 
  - js syntax for ocaml, compile to js
- why?

- how? Ecosystem diagram = RE <-> Ocaml => BuckleScript...

- disclaimer - small community, initial stages, docs sometimes missing, 


# Table of Content

1. [Prerequisites](#prerequisites)
2. [Workshop overview](#overview)
    - [Goals](#goals)
    - [Process](#process)
3. [The task](#task)
    - [Flow](#flow)
    - [Limitaions](#limit)
4. [Tools](#tools)<br/><br/>
5. [Workshop](#workshop)
6. [Documentation](#docs)
7. [Summary](#sum) <br/><br/>
8. _[Additional information](#info)_
    - _[Reminder on API Gateway](#apigw)_
    - _[Differences from Scala workshop version](#scaladiff)_
    - _[Lerna](#lerna)_
    - _[Proto and code generation](#proto)_
    - _[Why no yoshi](#yoshi)_
    

<a name="prerequisites"></a>

# Prerequisites

This workshop is intended for and has been tested with VS-Code to work out-of-the-box.

If you want to use `vim` or `WebStorm` - Awesome! After the workshop figure out how to configure your optimal setup.

* Install [VS Code](https://code.visualstudio.com/download)
* Install the [reason-vscode](https://marketplace.visualstudio.com/items?itemName=jaredly.reason-vscode) plugin


## TL;DR : Editor Plugin

Currently there are two common extensions to choose from:
  * [reason-vscode](https://marketplace.visualstudio.com/items?itemName=jaredly.reason-vscode)
  * [OCaml and Reason IDE](https://marketplace.visualstudio.com/items?itemName=freebroccolo.reasonml)

We recommend installing `reason-vscode`:
  * It's the one stated in the official [ReasonML docs](https://reasonml.github.io/docs/en/editor-plugins#officially-supported-editors)
  * It's installation process seems simpler and with less dependencies
  * It is being actively 

Just add the extension to VS Code and should work out of the box. We highly recommend setting your editor's `formatOnSave` settings to `true` (In User Settings).






<a name="overview"></a>

# Workshop high level overview

<a name="goals"></a>

  ## Goals
  - General understanding of the ReasonML ecosystem
  - Experience hands on some of the super productive features 
  - Have fun!

<a name="workshop"></a>

  ## Workshop
  
  chapters are ready to go
  `npm start` for compilation with watch
  `npm test` to run built in tests
  everything you need is written in comments

  
        
<a name="info"></a>

# Additional Resources



## More Coding!
folder with AoC, Katas, etc.

        
## How to start a project from scratch

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


## Links

* links to sites (buckle script, reasonml)
* next steps (reason react, ocaml)


## Credits 

* OCaml workshop by Jane Street (add link)
* learn-reasonml-workshop (https://github.com/protoship/learn-reasonml-workshop)
