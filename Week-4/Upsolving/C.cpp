#include <iostream>
using namespace std;

int main() {
    int  n ; 
    cin >> n ;
    int a[n-1] ;
    for(int i = 0 ; i < n - 1 ;i++){
        cin >> a[i] ;
    }
    int c , d ;
    cin >> c >> d ;
    int sum = 0 ;
    for(int i = c ; i < d ;i++){
        sum += a[i - 1] ;
    }
    cout << sum << endl;
    /*3
    5 6
    1 2
    */
   return 0 ; 
}
