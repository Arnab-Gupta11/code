#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;

    while(t--){
        string s,x;
        cin >> s >> x;
        string result;
        for(int i=0;i<s.length();i++){
            bool isFound=true;
            int index=0;
            for(int j=i; j<i+x.length();j++){
                if(s[j]!= x[index]){
                    isFound=false;
                    break;
                }
                ++index;
            }
            if(isFound){
                s.replace(i, x.length(), "#");
            }
        }

        cout<<s<<endl;
    }

    return 0;
}