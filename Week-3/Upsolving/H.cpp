#include <iostream>

using namespace std;

int main() {
    int n;
    for(int i = 1 ; i <= 5 ;i++){ // row
        for(int j = 1 ; j <= 5 ;j++){ // column
            cin >> n ;
            if(n==1){
                cout << abs(3-i) + abs(3-j) ;
            }
        }
    }
   return 0 ; 
}
