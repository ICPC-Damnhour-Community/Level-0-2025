#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long  ll;

int main() {
    
    int t = 1;
    cin >> t;
    
    while(t--){
        int a, b; cin >> a >> b;
        
        if(a % 2 || (b % 2 && a == 0)) cout << "NO\n";
        else cout << "YES\n";
    }
    
    
    return 0;
}
