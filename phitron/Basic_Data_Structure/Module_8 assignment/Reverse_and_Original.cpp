#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* next;

    Node(long long val) {
        this->val = val;
        this->next = NULL;
    }
};

void display(Node* head) {
    for (Node* i = head; i != NULL; i = i->next)
        cout << i->val << " ";
    cout << endl;
}

void addLast(Node*& head, Node*& tail, int val) {
    if (head == NULL) {
        head = new Node(val);
        tail = head;
    }
    else {
        tail->next = new Node(val);
        tail = tail->next;
    }
}

void inputList(Node*& head, Node*& tail) {
    int x;
    while (true) {
        cin >> x;
        if (x == -1) {
            break;
        }
        addLast(head, tail, x);
    }
}

void displayReverse(Node* head) {
    if (head == NULL) return;
    displayReverse(head->next);
    cout << head->val << " ";
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    inputList(head, tail);

    displayReverse(head);
    cout << endl;
    display(head);

    return 0;
}