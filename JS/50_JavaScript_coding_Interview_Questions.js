// 1.JavaScript function to calculate the sum of two numbers. 
// function sum(a,b){
//   return a+b;
// }

// console.log(sum(1,2))

// 2. Write a JavaScript program to find the maximum number in an array. 
function findMaxNumber(arr) {
  return Math.max(...arr);
}
// Example usage
const numbers = [10, 25, 47, 2, 89, 14];
console.log("Maximum number:", findMaxNumber(numbers));
