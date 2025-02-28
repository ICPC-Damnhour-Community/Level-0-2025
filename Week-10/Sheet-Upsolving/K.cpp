#include <iostream>
#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fast
    int t;
    cin >> t;
    while(t--) {
       int k,q; cin >> k >> q;
        ll a [k];
        for(int i = 0 ; i < k ; i++)
            cin >> a[i];
        
        while ( q-- ) {
            int n; cin >> n;
            int x = a[0] - 1;
            cout << min(x,n) << " ";
        }
        
        cout << "\n";
        
    }
    return 0;
}
