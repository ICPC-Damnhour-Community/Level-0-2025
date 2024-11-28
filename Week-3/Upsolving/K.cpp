#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long  ll;

int main() {
    
    int t = 1;
    //cin >> t;
    
    while(t--){
        int n, k; cin >> n >> k;
        
        while(k--){
            int lst = n % 10;
            
            if(lst != 0) n--;
            else n /= 10;
        }
        
        cout << n << endl;
    }
    
    return 0;
}
