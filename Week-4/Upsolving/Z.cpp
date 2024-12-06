#include <bits/stdc++.h>
using namespace std;

#define bye return 0

int32_t main() {
    int t;
    cin >> t;
    while(t--) {
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a+3);
        if(a[1] % a[0] != 0 or a[2] % a[0] != 0){
            cout << "NO\n";
            continue;
        }
        if(a[1]/a[0] + a[2]/a[0] - 2 > 3){
            cout << "NO\n";
        }
        else
            cout << "YES\n";

    }
    bye;

}