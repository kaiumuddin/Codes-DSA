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

void sortList(Node* head) {
    for (Node* i = head; i->next != NULL; i = i->next)
        for (Node* j = i->next; j != NULL; j = j->next)
            if (i->val < j->val)
                swap(i->val, j->val);
}

int sizeOfList(Node* head) {
    int s = 0;
    for (Node* i = head; i != NULL; i = i->next)
        s++;
    return s;
}

void middleOfList(Node* head) {
    int n = sizeOfList(head);
    if (n == 1) {
        cout << head->val << endl;
        return;
    }

    Node* tmp = head;
    for (int i = 0; i < (n / 2) - 1; i++)
        tmp = tmp->next;

    if (n % 2 == 1) {
        cout << tmp->next->val << " " << endl;
    }
    else {
        cout << tmp->val << " ";
        cout << tmp->next->val << endl;
    }
}

int main() {
    Node* a = NULL;
    inputList(a);

    sortList(a);
    middleOfList(a);

    return 0;
}