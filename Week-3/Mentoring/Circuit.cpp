#include <iostream>
#include <algorithm>
#include <set>
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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int one = 0;
        for (int i = 0; i < 2 * n; i++)
        { // 1 0 1 0 0 1
            int x;
            cin >> x;
            if (x == 1)
                one++;
        }
        int zero = 2 * n - one;
        int mn;
        if (one % 2 == 1)
            mn = 1;
        else
            mn = 0;
        int mx = min(one, zero);

        cout << mn << " " << mx << endl;
    }
}
