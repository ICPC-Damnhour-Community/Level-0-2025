#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define  ll long long
using namespace std;

int main() {
    int t ;
    cin >> t;
    while(t--){
        ll n ;
        cin >> n ;
        ll sum = (n*(n+1)) / 2;
        ll power2 = 1 ;
        while(power2 <= n){
            sum -=( power2 * 2) ; 
            power2 *= 2 ;
        } 
        cout << sum << endl;
    }
   return 0 ; 
}
