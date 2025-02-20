#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define  ll long long
using namespace std;

int main() {
    int t ;
    cin >> t;
    while(t--){
        int n ;
        cin >> n;
        int a[n];
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
            // 2 2 1 2
        }
        sort(a,a+n);
        // 1 2 2 2 -> min == 1
        int add = a[0] + 1 ;
        int present = 1 ;
        for(int i = 1 ; i < n ; i++){
            present *= a[i];
            // 1 * 2 * 2 * 2 == 8  -> 1 is present
        }
        int pro = present * add ;
        // 2 * 8 == 16
        cout << pro << endl;
    }
   return 0 ; 
}
