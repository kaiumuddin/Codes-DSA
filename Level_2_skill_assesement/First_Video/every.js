const numbers = [1, 2, 3, 4, 5];

const allEven = numbers.every(num => num % 2 === 0);
console.log(allEven);





const users = [
    {name: "Alice", age: 25},
    {name: "Bob", age: 30},
    {name: "Charlie", age: 35}
];

const all20 = users.every(u => u.age > 30);
console.log(all20);




function myEvery(numbers) {
    for (let i = 0;i < numbers.length;i++) {
        if (numbers[i] % 2 === 0) {
            continue;
        }
        else {
            return false;
        }
    }
    return true;
}

console.log(myEvery(numbers));