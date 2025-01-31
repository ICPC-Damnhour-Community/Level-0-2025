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
    int mn = arr[min_element(arr, arr + n) - arr];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (arr[i] - mn);
    }
    cout << ans << endl;
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