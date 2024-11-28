#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long  ll;

int main() {
    
    int t = 1;
    cin >> t;
    
    while(t--){
        int a, b, c; cin >> a >> b >> c;
        if(a < b && b < c) cout << "STAIR\n";
        else if(a < b && b > c) cout << "PEAK\n";
        else cout << "NONE\n";
    }
    
    
    return 0;
}
