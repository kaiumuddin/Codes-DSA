const numbers = [1, 2, 3, 4, 5];
// const even = numbers.find(num => num % 2 === 0);
const even = numbers.find(num => num % 2 === 0);
console.log(even);


const users = [
    {name: "Alice", age: 25},
    {name: "Bob", age: 30},
    {name: "Charlie", age: 35}
];

// const user = users.find(u => u.age === 30);
const user = users.find(u => u.age === 30);
console.log(user);


function myFind(numbers) {
    for (let i = 0;i < numbers.length;i++) {
        if (numbers[i] % 2 === 0) {
            return numbers[i];
        }
    }
}

console.log(myFind(numbers));
