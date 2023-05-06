function greater_than_right(arr) {
    const n = arr.length;
    const output = [];
    let maxSoFar = -Infinity;

    for (let i = n - 1;i >= 0;i--) {
        if (arr[i] > maxSoFar) {
            output.push(arr[i]);
            maxSoFar = arr[i];
        }
    }

    return output.reverse();
}


console.log(
    greater_than_right([14, 15, 8, 9, 5, 2])
);
console.log(
    greater_than_right([1, 2, 3, 4, 5])
);
console.log(
    greater_than_right([5, 4, 3, 2, 1])
);
