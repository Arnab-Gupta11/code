#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        
        int v1[n], v2[n];  
        
        for (ll i = 0; i < n; i++) {
            cin >> v1[i];
        }
        
        for (ll i = 0; i < n; i++) {
            cin >> v2[i];
            if (v1[i] <= 0) {
                v2[i] = 0;
            }
        }

        sort(v2, v2 + n);  
        ll l = v2[n - 1];  
        
        ll ans = 0;
        for (ll i = 0; i < n; i++) {
            if (v1[i] > 0) {
                ans += v1[i];
            }
        }
        
        if (ans < l) cout << 0 << endl;
        else cout << ans - l << endl;
    }

    return 0;
}