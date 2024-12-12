#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
    long long n , m , a , b ;
    cin >>    n >> m ;
    long long sum = 0 , cnt = 0 ;
    long long c[n] ;
    for(long long i = 0 ; i < n ; i++){
        cin >> a >> b ;
        sum += a ;
        c[i] = a - b ;
    }
    sort(c,c+n);
    reverse(c,c+n);
    long long dif = sum - m ;
    if(dif <= 0){
        cout << 0 << endl;
        return 0 ;
    }
    long long x ;
    for(long long i = 0 ; i < n ; i++){
        if(x >= dif){
            break;
        }
        x +=c[i];
        cnt++;
    }
    if(x < dif){
        cout << -1 << endl;
    }
    else{
        cout << cnt << endl;
    }
    return 0;
}
