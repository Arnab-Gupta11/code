#include<bits/stdc++.h>
using namespace std;
void passRef(int* p){
    *p=20;
    cout<<"Value inside function :"<<*p<<endl;
}
int main(){
    int x=10;
    cout<<"Value inside function :"<<x<<endl;
    passRef(&x);
    cout<<"Value inside function :"<<x<<endl;
    return 0;
}