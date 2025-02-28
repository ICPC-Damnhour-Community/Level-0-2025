#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define  ll long long
using namespace std;
int main() {
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        vector <int> a(n) ;
        for (int i = 0 ; i < n ; i++){
            cin >> a[i];
            a[i] -= 1 ;
        }
        int ans = 3 ;
        for (int i = 0 ; i < n ; i++){
           if(a[a[i]] == i){
            ans = 2 ;
            break;
           }
        }
        cout << ans << endl;
        }
   return 0 ; 
}
