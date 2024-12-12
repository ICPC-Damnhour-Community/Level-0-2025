#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    long long n ;
    cin >> n ;
    long long a[n] ;
    for(long long i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }
    reverse(a ,a+n);
    for(long long i = 0 ; i < n ; i++){
        cout << a[i] << " "    ;
    }
    return 0;
}
