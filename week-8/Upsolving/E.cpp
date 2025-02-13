#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define  ll long long
using namespace std;

int main() {
    int t ;
    cin >> t;
    while(t--){
        ll hc , dc , hm , dm , k , w , a ;
        cin >>  hc >> dc >> hm >> dm >> k >> w >> a ;
        bool flag = 0 ;
        for(int i = 0 ; i <=k ; i++){
            ll newhc = hc + (i * a);
            ll newdc = dc + (k - i ) * w ;
            ll mono = (newhc + dm - 1) / dm ; 
            ll mons = (hm + newdc - 1) / newdc ; 
            if(mono >= mons){
                flag = 1 ;
            }
        }
        if(flag){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
   return 0 ; 
}
