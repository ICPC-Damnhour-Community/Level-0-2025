#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a[5][5] ;
    int row = 0 , column = 0 ;
    for(int i = 0 ; i < 5 ; i++){
         for(int j = 0 ; j < 5 ; j++){
            cin >> a[i][j] ;
            if(a[i][j]==1){
                row = i + 1 , column = j + 1 ;
            }
         }
    }
    cout << abs(3 - row) + abs (3 - column ) ;
   return 0 ; 
}
