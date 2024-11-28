#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long  ll;

int main() {
    
    int t = 1;
    //cin >> t;
    
    while(t--){
        int n;
        cin >> n; // 25
        int sum = 0, h = 0; //
        while(sum <= n){ // 35 <= 25
            h++; // 5
            sum += (h * (h + 1) / 2); // 1 + 3 = 4 + 6 = 10 + 10 = 20 + 15 = 35
        }
        cout << h - 1; // 5 - 1 = 4
    }
    
    return 0;
}
