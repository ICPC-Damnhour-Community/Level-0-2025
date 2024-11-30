#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, w, n;
    cin >> k >> w >> n;
    int tot = 0;
    for (int i = 1; i <= n; i++)
    {
        tot += (i)*k;
    }
    int ans = tot - w;
    if (ans < 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << ans << endl;
    }
}