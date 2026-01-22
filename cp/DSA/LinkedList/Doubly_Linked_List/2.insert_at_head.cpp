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

void insert_at_head(Node* &head,int val){
    Node* newNode= new Node(val);
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}

int main(){
    Node* head=new Node(10);  
    Node* a=new Node(20);  
    Node* tail=new Node(30);
    
    head->next=a;
    a->next=tail;
    a->prev=head;
    tail->prev=a;

    insert_at_head(head,100);
    insert_at_head(head,200);
    print_forword(head);
    cout<<endl;
    print_backward(tail);
    return 0;
}