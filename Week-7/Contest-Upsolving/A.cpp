#include <bits/stdc++.h>
using namespace std;
#define int long long

void Fast()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve()
{
    string s;
    cin >> s;
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < 3; i++)
    {
        sum1 += s[i] - '0';
    }
    for (int i = 3; i < 6; i++)
    {
        sum2 += s[i] - '0';
    }
    if (sum1 == sum2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
int32_t main()
{
    Fast();
    int q;
    cin >> q;
    // q=1;
    while (q--)
    {
        solve();
    }
}
