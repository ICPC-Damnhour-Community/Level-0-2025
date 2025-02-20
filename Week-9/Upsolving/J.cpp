#include <iostream>
#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
 
int main() {
    fast
    int t;
    cin >> t;
    while (t--) {
        int n ,m ,k;
        cin >> n >> m >> k;
        for (int i = n; i > m; i--) {
            cout << i << ' ';
        }
        for (int i = 1; i <= m; i++) {
            cout << i << ' ';
        }
        cout << '\n';
    }
    return 0;
}