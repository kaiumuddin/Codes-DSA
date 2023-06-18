#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void display(Node* head) {
    for (Node* i = head; i != NULL; i = i->next)
        cout << i->val << " ";
    cout << endl;
}

void addLast(Node*& head, int val) {
    if (head == NULL) {
        head = new Node(val);
    }
    else {
        Node* i = head;
        while (i->next != NULL) {
            i = i->next;
        }
        i->next = new Node(val);
    }
}

int findMax(Node* head) {
    int maxi = INT_MIN;

    for (Node* i = head; i != NULL; i = i->next) {
        maxi = max(i->val, maxi);
    }

    return maxi;
}

int findMin(Node* head) {
    int mini = INT_MAX;

    for (Node* i = head; i != NULL; i = i->next) {
        mini = min(i->val, mini);
    }

    return mini;
}

int main() {
    Node* head = NULL;

    int x;
    while (true) {
        cin >> x;
        if (x == -1) {
            break;
        }
        addLast(head, x);
    }


    cout << findMax(head) << " ";
    cout << findMin(head) << endl;

    return 0;
}