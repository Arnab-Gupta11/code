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

void delete_at_head(Node* &head, Node* &tail){
    Node* deletedNode= head;
    head=head->next;
    if(head==NULL){
        cout<<"RUn"<<endl;
        tail=NULL;
        return;
    }
    head->prev=NULL;
    delete deletedNode;
}

int main(){
    Node* head=NULL;
    Node* tail=NULL;

    insert_at_tail(head,tail,10);
    insert_at_tail(head,tail,20);
    insert_at_tail(head,tail,30);
    insert_at_tail(head,tail,40);

    delete_at_head(head,tail);
    delete_at_head(head,tail);
    delete_at_head(head,tail);
    delete_at_head(head,tail);

    insert_at_tail(head,tail,40);
    insert_at_tail(head,tail,50);

    print_forword(head);
    cout<<endl;
    print_backward(tail);
    return 0;
}