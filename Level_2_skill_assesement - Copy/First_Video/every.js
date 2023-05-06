const numbers = [1, 2, 3, 4, 5];
// const isEven = numbers.every(num => num % 2 === 0);
const isEven = numbers.every(num => num % 2 === 0);
console.log(isEven);


const users = [
    {name: "Alice", age: 25},
    {name: "Bob", age: 30},
    {name: "Charlie", age: 35}
];

// const allUsersOver20 = users.every(u => u.age > 20);
const allUsersOver20 = users.every(u => u.age >= 20);
console.log(allUsersOver20);


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