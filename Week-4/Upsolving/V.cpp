#include <bits/stdc++.h>
using namespace std;

#define bye return 0

int32_t main() {
    int t;
    cin >> t;
    while(t--){
        int n, x, o = 0;
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> x;
            if(x % 2 == 1)
                o++;
        }
        if(o % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    bye;

}