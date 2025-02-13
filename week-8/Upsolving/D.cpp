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
        ll a[n];
        ll sum = 0 ;
        for(ll i = 0 ; i < n ;i++){
            cin >> a[i] ;
        }
        for(ll i = 0 ; i < n ;i++){
           sum += (i + 1) * (n - i) ;
           if(a[i] == 0){
            sum += (i + 1) * (n - i) ;
           }
        }
        cout << sum << endl;

    }
   return 0 ; 
}
