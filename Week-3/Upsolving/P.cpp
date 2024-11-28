#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long  ll;

int main() {
    
    int t = 1;
    cin >> t;
    
    while(t--){
        int h, m;
        char colon;
        cin >> h >> colon >> m;
        
        string half = (h >= 12 ? "PM" : "AM");
        
        h = (h % 12 ? h % 12 : 12); // 18 % 12 = 6
        
        if(h <= 9) cout << 0; // 0
        cout << h; // 06
        
        cout << colon; // 06:
        
        if(m <= 9) cout << 0; // 06:0
        cout << m; // 06:06
    
        cout << " " << half << "\n";
    }
    
    
    return 0;
}
