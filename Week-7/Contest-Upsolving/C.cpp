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
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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