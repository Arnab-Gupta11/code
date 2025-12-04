#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=20;
    int* p=&a;
    *p=39;
    cout<<p<<endl;
    cout << *p <<endl;
    cout << &p <<endl;
    cout << a <<endl;
    return 0;
}