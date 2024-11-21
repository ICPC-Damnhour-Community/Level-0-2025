#include <bits/stdc++.h>
 
using namespace std;

int main(){
    int a, b;
    cin >> a >> b; // month day
    
//    if(b >= a) cout << a << endl;
//    else cout << a - 1 << endl;
    
    if(b < a) a--;
    cout << a << endl;
    
    return 0;
}
