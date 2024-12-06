#include <iostream>
#include <algorithm>
#include <set>
#include <cmath>
using namespace std;
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define endl "\n"

void ip()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int main()
{
    ip();
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b * log(a) > d * log(c))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
