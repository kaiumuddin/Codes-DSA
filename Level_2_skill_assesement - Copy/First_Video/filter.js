const numbers = [1, 2, 3, 4, 5];
// const even = numbers.filter(num => num % 2 === 0);
const even = numbers.filter(num => num % 2 === 0);
console.log(even);


const users = [
    {name: "Alice", age: 25},
    {name: "Bob", age: 30},
    {name: "Charlie", age: 35}
];

// const youngUsers = users.filter(u => u.age <= 30);
const youngUsers = users.filter(u => u.age <= 30);
console.log(youngUsers);


function myFilter(numbers) {
    const result = [];
    for (let i = 0;i < numbers.length;i++) {
        if (numbers[i] % 2 === 0) {
            result.push(numbers[i]);
        }
    }
    return result;
}

console.log(myFilter(numbers));