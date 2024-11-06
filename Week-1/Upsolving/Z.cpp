#include <bits/stdc++.h>
using namespace std;

#define int long long

int main() {

    int t;
    cin >> t;
    int fT = (t*t + 2*t + 3);
    int ffT = (fT * fT + 2*fT + 3);
    int x = fT + t;
    int ftPlus = (x*x + 2*x + 3);
    int y = ffT + ftPlus;
    cout << (y*y + 2*y + 3);

    return 0;
}