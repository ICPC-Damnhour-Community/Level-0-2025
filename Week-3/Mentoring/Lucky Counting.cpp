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
    int even = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
            even++;
    }

    int odd = n - even;
    // cout << odd << " " << even << endl;
    int product = odd * even;
    if (product == 0)
    {
        cout << "NO" << endl;
        return 0;
    }
    bool flag = false;
    while (product)
    {
        int d = product % 10;
        product = product / 10; // 7 1
        if (d != 4 && d != 7)
        {
            flag = true;
            break;
        }
    }

    if (!flag)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
