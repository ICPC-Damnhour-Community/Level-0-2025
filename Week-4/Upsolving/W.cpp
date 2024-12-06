#include <bits/stdc++.h>
using namespace std;

#define bye return 0

int32_t main() {
    int t;
    cin >> t;
    while(t--){
        int n, k, x;
        cin >> n >> k;
        bool ok = false;
        for(int i=0; i<n; i++){
            cin >> x;
            if(x == k)
                ok = true;
        }
        if(ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    bye;

}