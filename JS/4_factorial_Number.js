function factorial(num){
    let result = 1;
    if(num<0) return 'Factorial undefined for negatives.'
    while(num>1){
        result = result *num
        num--
    }
    return result;
}
console.log(factorial(5))