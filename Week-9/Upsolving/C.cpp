#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define  ll long long
using namespace std;

int main() {
    /*6
    abc
    acb
    bac
    bca
    cab
    cba
*/
    int t ;
    cin >> t;
    while(t--){
        string  s ;
        cin >> s ;
        if(s == "abc" || s == "acb" || s == "bac" || s == "cba"){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
   return 0 ; 
}
