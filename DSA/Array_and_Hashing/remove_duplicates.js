function remove_dups(arr) {
    return [...new Set(arr)];
}

console.log(remove_dups([1, 2, 3, 4, 5, 5, 6]));

////////////////////////////////////////////////////////////////////////

function removeRepeatingElements(arr) {
    return arr.filter((element, index) => {
        return arr.indexOf(element) === index && arr.lastIndexOf(element) === index;
    });
}

// Example usage:
const arr = [1, 2, 2, 3, 3, 3, 4, 5, 5];
const uniqueArr = removeRepeatingElements(arr);
console.log(uniqueArr); // [1, 4]
