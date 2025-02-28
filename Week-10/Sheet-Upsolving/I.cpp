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
        int k; cin >> k;
        int n = 0; int c = 0 ;
 
        while ( c < k ) {
            n++;
            if( n%3!=0 && n%10!=3 )  c++;
        }
        cout << n << "\n" ;
    }
    return 0;
}
