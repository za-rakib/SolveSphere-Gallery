// Hoisting
// Functions: Fully hoisted, can be called before declaration.
// Variables: Hoisted but initialized as undefined.
// let/const: Hoisted but not initialized (temporal dead zone). and get get an initialisation error.

// 1
// function showData() {
//   console.log("Name:", name);
//   console.log("Age:", age);
//   var name = "Rakib";
//   let age = 27;
// }
// showData(); 

// output 

// 2
for(var i =0 ; i<4; i++){
  setTimeout(()=>console.log(i))
}

for(let i =0 ; i<4; i++){
  setTimeout(()=>console.log(i))
}

// output
