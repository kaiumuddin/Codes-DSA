let persons = [
    {
        firstName: "michale",
        lastName: "karate",
    },
    {
        firstName: "jibon",
        lastName: "maji",
    },
    {
        firstName: "sakib",
        lastName: "khan",
    },
];

function searchPerson(arr, name) {
    // for (let person of arr) {
    //     if (person.firstName === name || person.lastName === name) {
    //         return true;
    //     }
    // }
    // return false;

    return persons.find(person => person.firstName === name || person.lastName === name) !== undefined;
}

console.log(searchPerson(persons, 'sakib'));
console.log(searchPerson(persons, 'riyad'));

