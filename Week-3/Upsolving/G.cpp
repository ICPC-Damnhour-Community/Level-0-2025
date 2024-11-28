#include <iostream>

using namespace std;

int main() {
    int l , b ;
    cin >> l >> b ;
    int years = 0 ;
    while(l<=b){ 
        l*=3; // l = l*3
        b*=2; // b = b*2
        years++;
        // when l > b == Break ;
    }
    cout << years ;
   return 0 ; 
}
