function palindrome(str) {
    const len = str.length;
    let i = 0, j = len - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

console.log(palindrome("abba"));
console.log(palindrome("soros"));
console.log(palindrome("mango"));
console.log(palindrome("maam"));