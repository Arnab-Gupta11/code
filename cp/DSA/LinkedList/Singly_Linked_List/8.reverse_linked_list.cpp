#include<bits/stdc++.h>
using namespace std;
//Create Node
class Node{
    public:
    int val;
    Node* next;
    //Constructor to initialize the node.
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};

//O(N) -> Print linked list.
void print_linked_list(Node* temp){

    while(temp != NULL){
        cout<<temp->val<< " ";
        temp= temp->next;
    }
}

//O(1) -> Insert New Node at tail.
void insert_at_tail(Node* &head, Node* &tail, int val){
    //1.Create a New Node
    Node* newNode= new Node(val);

    //2.Check newNode is firstNode. In that case head and tail are point to the same node.
    if(head==NULL){
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode; //3.Connect newNode at tail.
    tail=newNode; //4. shift tail at last Node.
}

void reverse_linked_list(Node* temp){
    if(temp==NULL){
        return;
    }
    reverse_linked_list(temp->next);
    cout<< temp->val<< " "; 
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

    print_linked_list(head);
    cout<<endl;
    reverse_linked_list(head);
    return 0;
}