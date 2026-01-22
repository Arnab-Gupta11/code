#include<bits/stdc++.h>
using namespace std;

int* func(){
    int* arr= new int[5];
    for(int i=0;i<5;i++){
        cin>> arr[i];
    }
    return arr;
}

int main(){
    int* a=func();
    cout<< *a <<endl;
    return 0;
}