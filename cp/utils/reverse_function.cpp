#include<bits/stdc++.h>
using namespace std;
int main (){
    int arr[5]={1,2,3,4,5};
    //first argument => starting pointer
    //second argument => ending pointer
    
    reverse(arr,arr+5);
    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    string str="ARNAB";
    reverse(str.begin(),str.end());
    cout<< str <<endl;

}