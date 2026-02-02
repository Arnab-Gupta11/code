#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *Right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->Right = NULL;
    }
};

void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->Right);
}

int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);

    root->left = a;
    root->Right = b;
    a->left = c;
    b->left = d;
    b->Right = e;
    preorder(root);
    return 0;
}