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
    int n;
    cin >> n;
    long long sum = 0;
    int mnx = int(1e9);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum = sum + x; // 11
        if (x % 2 == 1)
        {
            mnx = min(x, mnx); // 5
        }
    }
    if (sum % 2 == 0)
        cout << sum << endl; // if even print sum
    else
        cout << sum - mnx << endl;
}
//  2 4 5 7 19 1
