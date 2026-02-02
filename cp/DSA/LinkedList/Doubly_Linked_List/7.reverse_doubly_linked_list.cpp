#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};

void print_forword(Node* temp){
    while(temp != NULL){
        cout<< temp->val <<" ";
        temp= temp->next;
    }
}
void print_backward(Node* temp){
    while(temp != NULL){
        cout<< temp->val <<" ";
        temp= temp->prev;
    }
}

void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newNode= new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;
}

void reverse_doubly_linked_list(Node* head, Node* tail){
    for(Node *i=head,  *j=tail; i!=j && i->prev != j ; i=i->next , j=j->prev){
        swap(i->val,j->val);
    }

}

int main(){
    Node* head=NULL;
    Node* tail=NULL;

    insert_at_tail(head,tail,10);
    insert_at_tail(head,tail,20);
    insert_at_tail(head,tail,30);
    insert_at_tail(head,tail,40);

    reverse_doubly_linked_list(head,tail);
    print_forword(head);

    return 0;
}