var fib = (n) => {
    const fn = (n) => {
        if (n == 0) return 0;
        if (n == 1) return 1;

        const f1 = fn(n - 1);
        const f2 = fn(n - 2);
        const fibn = f1 + f2;

        return fibn;
    };

    return fn(n);
};

// console.log(fib(5));
// console.log(fib(10));

////////////////////////////////////////////////////////

var fib = (n) => {
    const memo = {};

    const fn = (n) => {
        if (n == 0) return 0;
        if (n == 1) return 1;
        if (n in memo) return memo[n];

        const f1 = fn(n - 1);
        const f2 = fn(n - 2);
        const fibn = f1 + f2;

        return memo[n] = fibn;
    };

    return fn(n);
};

// console.log(fib(5));
// console.log(fib(10));
// console.log(fib(50));

////////////////////////////////////////////////////////

var fib = (n) => {
    const fib = new Array(n + 1).fill(0);
    fib[0] = 0;
    fib[1] = 1;

    for (let i = 2;i <= n;i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    return fib[n];
};

console.log(fib(5));
console.log(fib(10));
console.log(fib(50));
