#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node* next;
};

class linked_list
{
public:
    node* head, * tail;
    int size = 0;

public:
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }

    void addLast(int n)
    {
        // Write your code here
        if (size == 0) {
            node* t = new node;
            t->data = n;
            t->next = NULL;
            head = tail = t;
            size++;
            return;
        }
        node* t = new node;
        t->data = n;
        t->next = NULL;

        tail->next = t;
        tail = t;
        size++;
    }
    void display() {
        if (size == 0) {
            cout << "No Element to display" << endl;
            return;
        }
        for (node* t = head; t != NULL; t = t->next) {
            cout << t->data << " ";
        }
        cout << endl;
    }

    void removeFirst() {
        if (size == 0) {
            cout << "List is empty" << endl;
            return;
        }
        else if (size == 1) {
            head = tail = NULL;
            size--;
            return;
        }

        head = head->next;
        size--;
    }

    void addFirst(int n) {
        node* t = new node;
        t->data = n;
        t->next = head;
        head = t;

        if (size == 0) {
            tail = head;
        }
        size++;
    }

    void getFirst() {
        if (size == 0) {
            cout << "List is empty" << endl;
            return;
        }

        cout << head->data << endl;

    }

    void getLast() {
        if (size == 0) {
            cout << "List is empty" << endl;
            return;
        }

        cout << tail->data << endl;
    }

    void getAt(int idx) {
        if (size == 0) {
            cout << "List is empty" << endl;
            return;
        }
        else if (idx < 0 || idx >= size) {
            cout << "Invalid Arguments" << endl;
            return;
        }

        node* t = head;
        while (idx--) {
            t = t->next;
        }

        cout << t->data << endl;
    }

    void testList() {
        for (node* temp = head; temp != NULL; temp = temp->next) {
            cout << temp->data << endl;
        }
        cout << "size : " << size << endl;

        // if (size > 0) {
        //     cout << tail->data << endl;
        // }
    }
};


int main() {
    // string str;
    linked_list l;
    // while (true) {
    //     getline(cin, str);
    //     if (str[0] == 'q') {
    //         break;
    //     }
    //     if (str[0] == 'a') {
    //         string ss = str.substr(8, 2);
    //         int n = stoi(ss);
    //         l.addLast(n);
    //     }
    // }

    // while (true) {
    //     string s;
    //     int n;
    //     cin >> s >> n;
    //     if (s == "quit") {
    //         break;
    //     }
    //     else if (s == "addLast") {
    //         l.addLast(n);
    //     }
    // }

    l.addLast(0);
    l.addLast(10);
    l.addLast(20);
    l.addLast(30);
    l.addLast(40);
    l.addLast(50);
    l.display();

    l.addFirst(-10);
    l.display();
    // l.testList();

    return 0;

}