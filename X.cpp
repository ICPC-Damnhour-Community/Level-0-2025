#include <bits/stdc++.h>
using namespace std;

#define bye return 0

int main() {
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(a + b >= 10)
            cout << "YES\n";
        else if(a + c >= 10)
            cout << "YES\n";
        else if(b + c >= 10)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    bye;
}