// 1. Hoisting with var, let, and const
//  Hoisting is JavaScript's behavior of moving declarations to the top of their scope during compilation. Here's a breakdown:

//   Functions: Fully hoisted; they can be called before their declaration.
//   var: Hoisted but initialized as undefined.
//   let/const: Hoisted but not initialized, leading to a Temporal Dead Zone (TDZ), which results in a ReferenceError if accessed before initialization.

// function showData() {
//   console.log("Name:", name); Undefined (due to hoisting of `var`)
//   console.log("Age:", age);  Error: Cannot access 'age' before initialization
//   var name = "Rakib";       `var` is hoisted and initialized as undefined
//   let age = 27;             `let` is hoisted but not initialized (TDZ)
// }
// showData();

// Output:
// Name: undefined (since name is declared with var and initialized later)
// Error: Cannot access 'age' before initialization (because age is declared with let, and it is in the Temporal Dead Zone until initialized)

// ****************************

// 2 Looping with var and let

// var: var has function scope, so the variable i is shared across all iterations of the loop.
// let: let has block scope, so each iteration gets its own unique value of i.

// for(var i =0 ; i<4; i++){
//   setTimeout(()=>console.log(i))
// }

// for(let i =0 ; i<4; i++){
//   setTimeout(()=>console.log(i))
// }

// For var: 4 4 4 4 (because the single i variable is updated to 4 before the setTimeout executes).
// For let: 0 1 2 3 (because let creates a new binding for i for each iteration).

// output

// 3
// Behavior of + and ! Operators
// The + operator converts its operand into a number.
// The ! operator converts its operand into a boolean, then negates it.

// console.log(+true);     Converts `true` to 1
// console.log(!"sgdf");   Converts non-empty string to `true`, then negates it to `false`
