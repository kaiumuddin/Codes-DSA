var graph = {
    a: ['b', 'c'],
    b: ['d'],
    c: ['e'],
    d: ['f'],
    e: [],
    f: [],
};

const bfs_print = (graph, source) => {
    const queue = [source];

    while (queue.length) {
        const curr = queue.shift();
        console.log(curr);

        for (let neighbhor of graph[curr]) {
            queue.push(neighbhor);
        }
    }
};

const dfs_iterative_print = (graph, source) => {
    const stack = [source];

    while (stack.length) {
        const curr = stack.pop();
        console.log(curr);

        for (let neighbhor of graph[curr]) {
            stack.push(neighbhor);
        }
    }
};

const dfs_recursive_print = (graph, source) => {
    console.log(source);

    for (let neighbhor of graph[source]) {
        dfs_recursive_print(graph, neighbhor);
    }
};


// dfs_iterative_print(graph, 'a');
// dfs_recursive_print(graph, 'a');
// bfs_print(graph, 'a');


