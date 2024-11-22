#include <iostream>

using namespace std;
int main() {
    int a ,b ;
    cin >> a >> b ;
    int m = a * b ;
    int sum = a + b ;
    int mins = a - b ;
    if(m>sum&&m>mins){
        cout << m << endl;
    }
    else if (sum>m&&sum>mins){
        cout << sum << endl;
    }
    else {
        cout << mins << endl ;
    }
    return 0 ;

}