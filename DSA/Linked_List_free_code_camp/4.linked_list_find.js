class Node {
    constructor(val, next = null) {
        this.val = val;
        this.next = next;
    }
}

const head =
    new Node(1,
        new Node(2,
            new Node(3,
                new Node(4,
                    new Node(8, null)))));

// A -> B -> C -> D -> null

const linkedListFind = (head, target) => {
    let ans = false;
    let curr = head;
    while (curr) {
        if (curr.val === target) {
            ans = true;
            break;
        }
        curr = curr.next;
    }
    return ans;
};

console.log(linkedListFind(head, 3));


const linkedListFindRecursive = (head, target) => {
    if (head == null) return false;
    let ans = head.val === target;
    if (ans == true) return ans;
    console.log(head.val);

    if (linkedListFindRecursive(head.next, target) == true) {
        ans = true;
    }

    return ans;
};

console.log(linkedListFindRecursive(head, 8));
