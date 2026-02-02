#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q;
    cin>>n>>q;
    vector<long long int> vec(n+1);
    for(int i=1;i<=n;i++){
        cin>>vec[i];
    }
    vector<long long int> pre(n+1);
    pre[1]=vec[1];
    for(int i=2;i<=n;i++){
        pre[i]=pre[i-1]+vec[i];
    }
    while(q--){
        int l,r;
        cin>>l>>r;
        if(l == 1){
            cout<< pre[r]<<endl;
        }else{
            cout<<pre[r]-pre[l-1]<<endl;
        }
    }
    return 0;
}