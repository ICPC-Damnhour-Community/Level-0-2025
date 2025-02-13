#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define  ll long long
using namespace std;

int main() {
    int t ;
    cin >> t;
    while(t--){
        int n , d ;
        cin >> n >> d ;
        int a [n] ;
        bool flag = 0 ;
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
        }
        sort(a , a + n);
        for(int i = 0 ; i < n ; i++){
            if(a[i] <=d){
                flag = 1 ;
            }
            else{
                for(int i = 0 ; i < n ; i++){
                    if((a[0]+a[1]) <= d){
                        flag = 1 ;
                    }
                    else{
                        flag = 0 ;
                    }
                }
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
