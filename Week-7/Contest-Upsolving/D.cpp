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
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    if (s == "yes")
    {
        cout << "YES\n";
    }
    else
    {

        cout << "NO\n";
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