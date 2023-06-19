#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void printForw(Node* head) {
    for (Node* i = head; i != NULL; i = i->next)
        cout << i->val << " ";
    cout << endl;
}

void printBack(Node* tail) {
    for (Node* i = tail; i != NULL; i = i->prev)
        cout << i->val << " ";
    cout << endl;
}

void reverse(Node* head, Node* tail) {
    Node* i = head;
    Node* j = tail;

    while (i != j && i->next != j) {
        swap(i->val, j->val);
        i = i->next;
        j = j->prev;
    }
}

int main() {
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = b;

    head->next = a;
    a->next = b;

    a->prev = head;
    b->prev = a;

    printForw(head);
    printBack(tail);

    reverse(head, tail);

    printForw(head);
    printBack(tail);

    return 0;
}