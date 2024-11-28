#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long  ll;

int main() {
    
    int t = 1;
    cin >> t;
    
    while(t--){
        int x1, x2, x3; cin >> x1 >> x2 >> x3;
        cout << max({x1, x2, x3}) - min({x1, x2, x3}) << endl;
    }
    
    return 0;
}
