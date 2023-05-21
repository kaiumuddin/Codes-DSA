var fun = (n) => {
    const fn = (n) => {
        if (n == 0) return 1;
        if (n < 0) return 0;

        const ans1 = fn(n - 1);
        const ans2 = fn(n - 2);

        const ansn = ans1 + ans2;
        return ansn;
    };

    return fn(n);
};

console.log(fun(3));


