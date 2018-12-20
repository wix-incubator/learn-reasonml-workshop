# Learn ReasonML Workshop

- what is Reason? 
  - js syntax for ocaml, compile to js
- why?

- ReasonMl ecosystem in a nutshell:
![ecosystem diagram](images/reasonml-ecosystem.jpg)

- disclaimer - small community, initial stages, docs sometimes missing, 


# Table of Content

1. [Prerequisites](#Prerequisites)
1. [Workshop](#Workshop)
    - Goals
    - How to
1. [Additional information](#additional-resources)
    - More Coding
    - Starting a project from scratch
    - Links
    - Credits
    


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



# Workshop

## Goals

  - General understanding of the ReasonML ecosystem
  - Experience hands on some of the super productive features 
  - Have fun!

## How to

This repository includes a `workshop-chapters` folder which contains, well, all the chapters for the workshop. The chapters are self-contained, fully documented and have tests at the end. Simply start at `ch01` and work your way through.

Since Reason is a compiled language, you need to compile your code before running tests. We recommend running `npm start` to have compilation run everytime your `.re` files change.

For ease of use, test your code by running `npm test`.

  


# Additional Resources

## More Coding!

If you've finished the workshop and want some additional coding challenges, we gathered together a few things you can do. Just take a look in the `more-coding` folder.

        
## How to start a project from scratch

If Reason really tickled your fancy and you want to start your own projects from scratch, here's a fast minimal way of doing it. Starting a new project has a few caviats and documentation changes often. Hopefully this section of the README will become redundant as the community fixes these issues.

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

There is a lot of basic material we did not cover in this workshop, and there's a lot to know. Probably everything you need to know is at one of the following sites:

* [ReasonML website](https://reasonml.github.io/)
* [BuckleScript website](https://bucklescript.github.io/)


## Credits 

This workshop is heavily based on [protoship/learn-reasonml-workshop](https://github.com/protoship/learn-reasonml-workshop) which is based on [a workshop organized by Jane Street](https://blog.janestreet.com/learn-ocaml-nyc/) for teaching OCaml.
