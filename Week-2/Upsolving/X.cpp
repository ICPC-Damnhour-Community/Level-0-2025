#include <bits/stdc++.h>
using namespace std;
#define bye return 0

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if((a*a) + (b*b) < (c*c))
        cout << "Yes";
    else
        cout << "No";
    bye;
}
