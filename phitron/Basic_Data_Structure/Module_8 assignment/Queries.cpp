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

void insertAtHead(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        tail = head;
    }
    else {
        newNode->next = head;
        head = newNode;
    }
}

void insertAtTail(Node*& head, Node*& tail, int val) {
    Node* newNode = new Node(val);

    if (head == NULL) {
        head = newNode;
        tail = head;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int q;
    cin >> q;

    while (q--) {
        int x, v;
        cin >> x >> v;

        if (x == 0) {
            insertAtHead(head, tail, v);
        }
        else if (x == 1) {
            insertAtTail(head, tail, v);
        }

        cout << head->val << " " << tail->val << endl;
    }
    return 0;
}