#include <iostream>
using namespace std;

int main() {
        int n ;
        cin >> n ;
        int a[n] ;
        int spaces = 0 ;
        for(int i = 0 ; i < n ; i++){
            cin >> a[i] ;
        }
        for(int i = 0 ; i < n - 1 ; i++){
            if(a[i] != a[i+1]){
                spaces++;
            } 
        }
        cout << spaces + 1 ;
   return 0 ; 
}
