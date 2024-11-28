// Hoisting
// Functions: Fully hoisted, can be called before declaration.
// Variables: Hoisted but initialized as undefined.
// let/const: Hoisted but not initialized (temporal dead zone). and get get an initialisation error.

function showData() {
  console.log("Name:", name);
  console.log("Age:", age);
  var name = "Rakib";
  let age = 27;
}
showData(); 
// output 
