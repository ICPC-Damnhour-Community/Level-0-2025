#include <iostream>
using namespace std;

int main() {
    int  n ; 
    cin >> n ;
    int a[n][n] ;
    for(int i = 1 ; i <= n ;i++){
        for(int j = 1 ; j <= n ; j++){
            a[i][j] = a[i-1][j] + a[i][j-1] ;
            a[i][1] = 1 ;
            a[1][j] = 1 ;
        }
    }
    cout << a[n][n] << endl ;
   return 0 ; 
}
