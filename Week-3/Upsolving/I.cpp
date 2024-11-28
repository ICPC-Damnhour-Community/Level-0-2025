#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long  ll;

int main() {
    
    int t; cin >> t;
    
    while(t--){ // 0 -> false
        int n; cin >> n;
        
        cout << (n / 10) + (n % 10) << endl;
    }
    
    return 0;
}
