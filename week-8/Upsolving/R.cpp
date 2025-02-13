#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

ll trucks(ll nc, ll load) {
    if (nc <= load) return 1;
    if (nc % 2 != 0) return trucks(nc / 2 + 1, load) + trucks(nc / 2, load);
    return 2 * trucks(nc / 2, load);
}

int main() {
    fast;
    
    int nc, load;
    while (cin >> nc >> load) {
        cout << trucks(nc, load) << "\n";
    }
    
    return 0;
}
