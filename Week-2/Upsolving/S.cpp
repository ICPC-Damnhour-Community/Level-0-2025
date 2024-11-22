#include <bits/stdc++.h>
using namespace std;
#define bye return 0

int main() {
    int v, t, s, d;
    cin >> v >> t >> s >> d;
    t*=v, s*=v;
    if(d >= t and d <= s)
        cout << "No";
    else
        cout << "Yes";

    bye;
}
