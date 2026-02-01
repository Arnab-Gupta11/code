// Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M

#include<bits/stdc++.h>
using namespace std;

int main(){
    char ch;
    cin >> ch;
    int asci= (int)ch;
    if(asci>=48 && asci<48+10){
        cout << "IS DIGIT"<<endl;
    }
    else if(asci>=65 && asci<65+32){
        cout << "ALPHA"<<endl;
        cout << "IS CAPITAL"<<endl;
    }
    else if(asci>=97 && asci<97+32){
        cout << "ALPHA"<<endl;
        cout << "IS SMALL"<<endl;
    }
    return 0;
}