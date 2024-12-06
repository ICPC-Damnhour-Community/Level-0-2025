#include <iostream>
using namespace std;

int main() {
    int t ;
    cin >> t ;
    while (t--){
        int n ;
        cin >> n ;
        int a[n] ;
        for(int i = 0 ; i < n ; i++){
            cin >> a[i] ;
        }
        int cnt = 0 ;
        int min = a[n - 1] ; // last element
        for(int i = n - 2 ; i >= 0 ;i--){
            if(a[i] > min){
                cnt++;
            }
            else{
               min  = a[i] ;
            }
        }
        cout << cnt << endl ;
    }
   return 0 ; 
}
