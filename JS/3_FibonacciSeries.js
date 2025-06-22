function fibonacci(number) {
  const initalArray = [0, 1];

  for (let i = 2; i < number; i++) {
    initalArray.push(initalArray[i - 1]+ initalArray[i-2]);
  }

  return initalArray.slice(0,number)
}

console.log(fibonacci(6))
