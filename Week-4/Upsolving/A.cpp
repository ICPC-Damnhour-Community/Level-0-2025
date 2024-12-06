#include <iostream>
using namespace std;

int main() {
    long long  n ; 
    cin >> n ;
    long long a[n] ;
    for(long long i = 1 ; i <= n ; i++){
        cin >> a[i] ;
    }
    long long l , r ;
    cin >> l >> r ;
    for(long long j = l ; j <= r ; j++){
        cout << a[j] << " ";
    }
   return 0 ; 
}
