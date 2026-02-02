#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    for(int i=0;i<t;i++){
        int n,x;
        cin>> n >> x;
        int profit=0;
        if(x>=n){
            cout<<0<<endl;
        }
        else{
            int cost=x*(n-x);
            for(int i=x+1;i<=n;i++){
                profit+=i;
            }
            cout<< profit-cost<<endl;
        }
    }
    return 0;
}