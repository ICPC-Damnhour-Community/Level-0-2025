#include <iostream>

using namespace std;
int main() {
    int a , b ;
    cin >> a >> b ;
    int sum = a + b ;
    if(sum>=10){
        cout << "error" << endl;
    }
    else {
        cout << sum << endl;
    }
    return 0 ;

}