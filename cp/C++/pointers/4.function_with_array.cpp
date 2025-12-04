#include<bits/stdc++.h>
using namespace std;

void func(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<< arr[i] <<endl;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }
    func(arr,n);
    return 0;
}