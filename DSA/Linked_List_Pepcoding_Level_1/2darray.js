const root = {
    name: "root",
    children: [
        {
            name: "index.html",
            children: [],
        },
        {
            name: "index2.html",
            children: [],
        },
        {
            name: "images",
            children: [
                {
                    name: "Apu Biswas",
                    children: [
                        {
                            name: "Apur Baccha",
                            children: [],
                        },
                        {
                            name: "Apur Baccha",
                            children: [],
                        },
                    ],
                },
                {
                    name: "Bubly",
                    children: [
                        {
                            name: "Bublyr Baccha",
                            children: [],
                        },
                    ],
                },
            ],
        },
        {
            name: "style.css",
            children: [],
        },
    ]
};

function dfs(root) {
    if (root.children.length) {
        console.log("Folder", root.name);

        root.children.forEach((child) => dfs(child));
    }
    else {
        console.log("File", root.name);
    }
}

// dfs(root);

//////////////////////////////////

const rootDiv = document.getElementById("rootDiv");

function render(root, rootDiv) {

    if (root.children.length) {
        const folderContainer = document.createElement("div");

        const folderName = document.createElement("div");
        folderName.textContent = `📁${root.name}`;

        const folderChildern = document.createElement("div");
        folderChildern.className = "folderChildern";

        folderContainer.append(folderName, folderChildern);

        folderName.onclick = function() {
            folderChildern.classList.toggle("hidden");
        };
        // recursion
        root.children.forEach((child) => render(child, folderChildern));

        rootDiv.append(folderContainer);

    } else {
        const div = document.createElement("div");
        div.textContent = `📃${root.name}`;
        rootDiv.append(div);
    }
}

render(root, rootDiv);
