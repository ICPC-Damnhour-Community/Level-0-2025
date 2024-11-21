#include <bits/stdc++.h>
 
using namespace std;

typedef long long ll;

int main(){
    ll n, k;
    cin >> n >> k;
    
    ll mid = (n + 1) / 2;
    if(k <= mid) cout << k * 2 - 1 << endl;
    else cout << (k - mid) * 2 << endl;
    
    
    return 0;
}
/*
 n = 10
 k = 7
 mid = (n + 1) / 2
 even -> (k - mid) * 2
 odd -> k * 2 - 1
 */
