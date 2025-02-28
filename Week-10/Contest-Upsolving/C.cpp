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
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }
    if ((arr[0] + arr[1] + arr[2]) % 2)
    {
        cout << -1 << endl;
        return;
    }
    int cnt = 0;
    while (arr[0] != 0 || arr[1] != 0)
    {
        if (arr[0] != 0)
        {
            arr[0]--;
            arr[2]--;
        }
        else
        {
            arr[1]--;
            arr[2]--;
        }
        sort(arr, arr + 3);
        cnt++;
    }
    cout << cnt << endl;
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
