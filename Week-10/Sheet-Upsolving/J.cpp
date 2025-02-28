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
    while ( t-- ) {
        int n; cin >> n;
        ll a[n] , b[n];
        for( int i = 0 ; i < n ; i++ ) {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b,b+n);

        for( int i = 0 ; i < n ; i++ ) {
            if ( a[i] == b[n-1] )
                cout << a[i] - b[n-2] << " " ;
            else
                cout << a[i] - b[n-1] << " ";
        }
        cout << "\n" ;
    }
    return 0;
}
