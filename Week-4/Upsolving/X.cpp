#include <bits/stdc++.h>
using namespace std;

#define bye return 0
int32_t main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        for(int i=1, j = 0; j< n ;i+=2, j++){
            cout << i << ' ';
        }
        cout << '\n';
    }
    bye;

}