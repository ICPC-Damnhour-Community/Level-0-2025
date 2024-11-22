#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main() {
    int x ;
    cin >> x ;
    if(x%10==x/100){
        cout << "Yes" << endl ;
    }
    else {
        cout << "No" << endl ;
    }
    return 0 ;

}