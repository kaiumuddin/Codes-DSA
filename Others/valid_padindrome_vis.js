

function isPalindrom(str) {
    for (let i = 0;i < str.length;i++) {

        var iRev = str.length - 1 - i;

        if (str[i] !== str[iRev]) {
            return false;
        }
    }
    return true;
}

isPalindrom("raceacar");