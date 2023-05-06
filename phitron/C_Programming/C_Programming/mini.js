function mini(a) {
    return function(b) {
        if (b) return a < b ? mini(a) : mini(b);
        return a;
    };
}

console.log(mini(5)(67)(3)(1)());
