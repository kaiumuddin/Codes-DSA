class Node {
    constructor(value, children = []) {
        this.value = value;
        this.children = children;
    }
}

function depthFirstTraversal(root) {
    if (root === null) return [];

    const result = [root.value];

    root.children.forEach(child => {
        result.push(...depthFirstTraversal(child));
    });
    return result;
}

function iterativeBfs(root) {
    if (root == null) return [];

    const queue = [root];
    const result = [];

    while (queue.length) {
        const curr = queue.shift();
        result.push(curr.value);

        curr.children.forEach(child => {
            queue.push(child);
        });
    }
    return result;
}

// Create a generic tree
const root =
    new Node('A', [
        new Node('B', [
            new Node('D'),
            new Node('E'),
        ]),
        new Node('C', [
            new Node('F'),
            new Node('G'),
            new Node('H')
        ])
    ]);

console.log(depthFirstTraversal(root));
console.log(iterativeBfs(root));
