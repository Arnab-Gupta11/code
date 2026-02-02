#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

void insert_at_tail(Node* &head, int val){
    Node* newNode=new Node(val);
    if(head== NULL){
        head=newNode;
        return;
    }

    Node* temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}

void insert_at_any_pos(Node* head, int idx, int val){
    Node* newNode= new Node(val);
    Node* temp=head;
    for(int i=0;i<idx-1;i++){
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}

void print_linked_list(Node* head){
    Node* temp= head;
    while(temp != NULL){
        cout<< temp->val << " ";
        temp=temp->next;
    }
}
int main(){
    Node* head = NULL; 

    insert_at_tail(head,500);
    insert_at_tail(head,600);
    insert_at_tail(head,700);

    insert_at_any_pos(head,1,550);
    insert_at_any_pos(head,3,650);

    print_linked_list(head);

    
    return 0;
}