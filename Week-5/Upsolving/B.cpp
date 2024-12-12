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
    long long sum = accumulate(a , a+n , 0LL);
    cout << sum ;
    return 0;
}
