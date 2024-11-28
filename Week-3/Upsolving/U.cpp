#include <bits/stdc++.h>
using namespace std;

#define bye return 0

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int f = (n/4);
        n -= (f*4);
        cout << f + (n/2) << '\n';
    }
    bye;
}