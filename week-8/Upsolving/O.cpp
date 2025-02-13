#include <iostream>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    
    ll n, s, d;
    cin >> n >> s >> d;

    bool found = false;

    for (int i = 0; i < n; i++) {
        ll x, y;
        cin >> x >> y;

        if (x < s && y > d) {
            found = true;
            break;
        }
    }

    if (found) 
        cout << "Yes\n";
    else 
        cout << "No\n";

    return 0;
}
