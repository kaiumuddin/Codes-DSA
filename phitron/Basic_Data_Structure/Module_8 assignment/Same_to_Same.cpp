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

void inputList(Node*& head) {
    int x;
    while (true) {
        cin >> x;
        if (x == -1) {
            break;
        }
        addLast(head, x);
    }
}

bool checkSame(Node* a, Node* b) {
    while (a != NULL && b != NULL) {
        if (a->val != b->val)
            return false;

        a = a->next;
        b = b->next;
    }

    if (a != NULL && b == NULL)
        return false;
    if (a == NULL && b != NULL)
        return false;

    return true;
}

int main() {
    Node* a = NULL;
    inputList(a);

    Node* b = NULL;
    inputList(b);

    if (!checkSame(a, b)) cout << "NO" << endl;
    else cout << "YES" << endl;

    return 0;
}