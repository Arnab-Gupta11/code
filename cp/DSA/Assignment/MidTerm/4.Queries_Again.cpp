#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

Node* head = NULL;
Node* tail = NULL;
int sz = 0;

void insert_head(int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    sz++;
}

void insert_tail(int val) {
    Node* newNode = new Node(val);
    if (tail == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    sz++;
}

void insert_at_index(int pos, int val) {
    if (pos == 0) {
        insert_head(val);
    } else if (pos == sz) {
        insert_tail(val);
    } else {
        Node* newNode = new Node(val);
        Node* cur = head;
        for (int i = 0; i < pos - 1; i++) {
            cur = cur->next;
        }
        newNode->next = cur->next;
        newNode->prev = cur;
        cur->next->prev = newNode;
        cur->next = newNode;
        sz++;
    }
}

void print_list() {
    cout << "L -> ";
    Node* tmpL = head;
    while (tmpL != NULL) {
        cout << tmpL->val << " ";
        tmpL = tmpL->next;
    }
    
    cout << "\nR -> ";
    Node* tmpR = tail;
    while (tmpR != NULL) {
        cout << tmpR->val << " ";
        tmpR = tmpR->prev;
    }
    cout << endl;
}

int main() {
    int q;
    if (!(cin >> q)) return 0;

    while (q--) {
        int x, v;
        cin >> x >> v;

        if (x < 0 || x > sz) {
            cout << "Invalid" << endl;
        } else {
            insert_at_index(x, v);
            print_list();
        }
    }

    return 0;
}