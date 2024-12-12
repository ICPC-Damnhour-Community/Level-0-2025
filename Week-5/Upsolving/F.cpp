#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    int n ;
    cin >> n ;
    int a[n] ;
    for(long long i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }
    if(find(a,a+n,1)!=a+n){ 
        cout << -1 << endl;
    }
    else{
        cout << 1 << endl;
    }
    return 0;
}
