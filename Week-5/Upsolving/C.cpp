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
    long long x ;
    cin >> x ;
    if(find(a,a+n,x)!=a+n){ 
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}