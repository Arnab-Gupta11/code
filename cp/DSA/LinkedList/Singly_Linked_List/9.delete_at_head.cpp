#include<bits/stdc++.h>
using namespace std;
//Create Node
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

//O(N) -> Print linked list.
void print_linked_list(Node* head){
    Node* temp=head;
    while(temp != NULL){
        cout<<temp->val<< " ";
        temp= temp->next;
    }
}

//O(1) -> Insert New Node at tail.
void insert_at_tail(Node* &head, Node* &tail, int val){
    Node* newNode= new Node(val);
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode; 
}

void delete_at_head(Node* &head){
    Node* deletedNode=head;
    head=head->next;
    delete deletedNode;
}


int main(){
    Node* head=NULL;
    Node* tail=NULL;
    
    while(true){
        int value;
        cin>> value;
        if(value == -1){
            break;
        }
        insert_at_tail(head,tail,value);
    }
    delete_at_head(head);
    delete_at_head(head);
    delete_at_head(head);

    print_linked_list(head);
    return 0;
}