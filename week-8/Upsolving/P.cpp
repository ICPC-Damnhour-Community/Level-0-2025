#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
    fast;
    
    int t;
    cin >> t;
    while (t--) {
        string s, q;
        cin >> s;
        
        ll ans = 0;
        while (true) {
            ans++;
            q = s;
            reverse(q.begin(), q.end());

            ll x = stoll(s);
            ll y = stoll(q);
            ll sum = x + y;
            
            s = to_string(sum);
            q = s;
            reverse(q.begin(), q.end());

            if (s == q) {
                cout << ans << " " << s << "\n";
                break;
            }
        }
    }
    
    return 0;
}
