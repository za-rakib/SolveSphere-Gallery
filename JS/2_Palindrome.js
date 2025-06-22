function isPalindrome(str){
   const reversed = str.split("").reverse().join("")  
   return (reversed === str) ? "yes palindrom" : "Not plaindrom"
}
console.log(isPalindrome("121"))