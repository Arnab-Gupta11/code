#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node* next;
    Node(int value){
        this->value=value;
        this->next=NULL;
    }
};


int main(){
    Node a(40),b(50),c(60);

    a.next=&b;
    b.next=&c;
    c.next= NULL;

    cout << a.value << " " <<b.value << " " << c.value <<endl;
    cout << a.value << " " <<a.next->value << " " << a.next->next->value <<endl;

    return 0;
}