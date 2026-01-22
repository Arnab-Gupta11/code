#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> test={1,2,3,4,5};
    int arr[]={10,20,30,40};
    vector<int> vec={100,200,300,400};
    // list<int> l(test);
    // list<int> l(arr,arr+4);
    list<int> l(vec.begin(),vec.end());

    for(auto it=l.begin(); it!= l.end();it++){
        cout << *it <<endl;
    }
    //Ranged based loop
    // for(int val : l){
    //     cout<< val <<endl;
    // }
    cout <<"Size : "<< l.size();
    return 0;
}