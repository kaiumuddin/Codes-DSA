const fruits = ["apple", "banana", "orange"];

for(let fruit of fruits){
    console.log(fruit)
}


for (let fruit of fruits) {
    console.log(fruit);
}

const str = "hello";
for (let char of str) {
    console.log(char);
}









const person = {
    name: "John",
    age: 30,
    gender: "male"
};


for( let key of Object.keys(person)){
    console.log(key)
}

for (let key of Object.keys(person)) {
    console.log(key);
}

for (let value of Object.values(person)) {
    console.log(value);
}

for (const [key, value] of Object.entries(person)) {
    console.log(key, value);
}
