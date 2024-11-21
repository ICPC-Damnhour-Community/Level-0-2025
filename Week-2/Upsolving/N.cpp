#include <bits/stdc++.h>
 
using namespace std;

int main(){
    int a, b, c; cin >> a >> b >> c;
    if(a > b) cout << "Takahashi\n";
    else if(b > a) cout << "Aoki\n";
    else {
        cout << (c == 0 ? "Aoki\n" : "Takahashi\n");
    }
    
    return 0;
}
