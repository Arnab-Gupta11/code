#include<bits/stdc++.h>
using namespace std;

int main(){
    //Type - 1
    // vector<int> vec;
    // cout<< vec.size();

    //Type -2 
    // vector<int> vec(5);
    // for(int i=0;i<vec.size();i++){
    //     cout<<vec[i]<<" ";
    // }

    //Type - 3
    // vector<int> vec(5,1);
    // for(int i=0;i<vec.size();i++){
    //     cout<<vec[i]<<" ";
    // }

    //Type -4 (copy vector into vectior)
    // vector<int> temp(7,2);
    // vector<int> vec(temp);
    // for(int i=0;i<vec.size();i++){
    //     cout<<vec[i]<<" ";
    // }

    //Type -5 (copy array into vectior)
    // int arr[5]={1,2,3,4,5};
    // vector<int> vec(arr,arr+5);
    // for(int i=0;i<vec.size();i++){
    //     cout<<vec[i]<<" ";
    // }
    //Type -6 (declare with initialize)
    vector<int> vec={1,2,3,4,5,6};
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
}