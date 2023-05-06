
let ans = "";

function towerOfHanoi(n, from_rod, to_rod, aux_rod) {
    if (n == 0) {
        return;
    }
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);
    let str = from_rod + "->" + to_rod + "\n";
    ans = ans + str;
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

function hanoi_steps(numberOfDiscs) {
    // write your code here

    towerOfHanoi(numberOfDiscs, 1, 3, 2);
    console.log(ans);
    return ans;
};

// hanoi_steps(4);


function arrtest() {
    arr.push("World");
    console.log(arr);
}

const arr = [];
arr.push("Hello");
console.log(arr);
arrtest(arr);
