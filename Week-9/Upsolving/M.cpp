#include <iostream>
#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
int main() {
    int t;
    cin >> t ;
    while (t--) {
        ll  m , a , b , c ;
        cin >> m >> a >> b >> c;
        ll r1 = min ( a , m );
        ll r2 = min ( b , m );
        ll x = m - r1;
        ll y = m - r2;
        ll sc = min ( c , x+y );
        cout << r1 + r2 + sc << "\n";
    }
 
    return 0;
}