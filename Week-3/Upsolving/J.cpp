#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long  ll;

int main() {
    
    int t; cin >> t;
    
    while(t--){ // 0 -> false
        int a, b, c;
        cin >> a >> b >> c;
        if(a + b == c) cout << "+\n";
        else cout << "-\n";
    }
    
    return 0;
}
