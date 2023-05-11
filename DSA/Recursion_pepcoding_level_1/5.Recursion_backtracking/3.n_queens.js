const print_queens = (chess, row, ans) => {
    if (row === chess.length) {
        console.log(ans);
        console.table(chess);
        return;
    }

    for (let col = 0;col < chess.length;col++) {
        chess[row][col] = 1;
        print_queens(chess, row + 1, ans + row + "-" + col + ', ');
        chess[row][col] = 0;
    }
};

const n = 2;
const chess = new Array(n).fill(0).map(e => Array(n).fill(0));
print_queens(chess, 0, "");