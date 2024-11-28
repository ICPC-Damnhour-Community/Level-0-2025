#include <bits/stdc++.h>
using namespace std;

#define bye return 0

int main() {
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int sum = 0;
        sum += (b > a);
        sum += (c > a);
        sum += (d > a);
        cout << sum << '\n';
    }
    bye;
}