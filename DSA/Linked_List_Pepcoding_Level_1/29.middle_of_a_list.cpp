#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;

    Node(int data, Node* next = NULL) {
        this->data = data;
        this->next = next;
    }
    Node() {}
};

class linked_list
{
public:
    Node* head;
    Node* tail;
    int size = 0;

public:
    linked_list() {
        head = NULL;
        tail = NULL;
    }

    void addLast(int val) {
        if (size == 0) {
            head = tail = new Node(val);
        }
        else {
            tail->next = new Node(val);
            tail = tail->next;
        }
        size++;
    }

    void display() {
        if (size == 0) {
            cout << "No Element to display" << endl;
            return;
        }
        for (Node* t = head; t != NULL; t = t->next) {
            cout << t->data << " ";
        }
        cout << endl;
    }

    int middle_element() {
        Node* s = head;
        Node* f = head;

        while (f->next && f->next->next) { // odd + even
            s = s->next;
            f = f->next->next;
        }

        cout << s->data << endl;
    }
};

int main() {
    linked_list l;


    l.addLast(0);
    l.addLast(10);
    l.addLast(20);
    l.addLast(30);
    l.addLast(40);
    l.addLast(50);
    l.addLast(60);
    l.addLast(70);
    l.addLast(80);
    l.addLast(90);
    l.display();

    l.middle_element();

    return 0;

}