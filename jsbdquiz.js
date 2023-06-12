
let fruits = ["apple", "banana", "orange"];

function addFruit(list, fruit) {
    list.push(fruit);
}

addFruit(fruits, "pineapple");

let name = "Saidur Rahman";

function changeName(original, current) {
    original = current;
}

changeName(name, "Setu");

console.log(fruits, name);