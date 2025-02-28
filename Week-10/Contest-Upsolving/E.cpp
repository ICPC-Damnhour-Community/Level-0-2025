#include <bits/stdc++.h>
using namespace std;
#define int long long

void Fast()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool prime(int x)
{
    if (x == 1)
    {
        return 0;
    }
    if (x == 2)
    {
        return 1;
    }
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

void solve()
{
    /* Omar_zydan */
    string s, t;
    cin >> s >> t;
    while (s[s.size() - 1] == t[t.size() - 1])
    {
        s.pop_back();
        t.pop_back();
    }
    cout << s.size() + t.size() << endl;
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