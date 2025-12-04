#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
     
    cin>> str;
    //string::iterator ===> auto (c++ version> 14 use auto keyword)
    for(auto it=str.begin();it<str.end();it++){
        cout<<*it<<endl;
    }
}