const numbers = [1, 2, 3, 4, 5];

const double = numbers.map(num => num * 2);

console.log(double);





const users = [
    {name: "Alice", age: 25},
    {name: "Bob", age: 30},
    {name: "Charlie", age: 35}
];

const names = users.map(u => u.name + " student");
console.log(names);





function myMap(numbers) {
    const result = [];
    for (let i = 0;i < numbers.length;i++) {
        result.push(numbers[i] * 2);
    }
    return result;
}

console.log(myMap(numbers));
