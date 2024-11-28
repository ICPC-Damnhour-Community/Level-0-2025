#include <bits/stdc++.h>
using namespace std;

#define bye return 0

int main() {
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(a == b)
            cout << c << '\n';
        else if(a == c)
            cout << b << '\n';
        else
            cout << a << '\n';
    }

    bye;
}