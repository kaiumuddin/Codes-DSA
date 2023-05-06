#include <iostream>
using namespace std;

// Define a structure for each node in the binary tree
struct Node {
    int data;
    Node* left = nullptr;
    Node* right = nullptr;

    Node() {}
    Node(int d) {
        data = d;
    }
};

// Function to print the nodes at a given level k
void printKLevel(Node* root, int k) {
    // If the root is null, return
    if (root == NULL) {
        return;
    }
    // If k is 0, print the data in the current node
    if (k == 0) {
        cout << root->data << " ";
    }
    else {
        // Recursively call the function for the left and right subtrees
        printKLevel(root->left, k - 1);
        printKLevel(root->right, k - 1);
    }
}

// int main() {
//     // Create a binary tree
//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);

//     // Print the nodes at level 2
//     cout << "Nodes at level 2: ";
//     printKLevel(root, 2);
//     cout << endl;

//     return 0;
// }

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int big = arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i] > big)
        {
            big = arr[i];
        }
    }
    printf("Big one is: %d", big);
}
