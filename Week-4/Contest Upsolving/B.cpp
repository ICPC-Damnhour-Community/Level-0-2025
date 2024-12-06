#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int mn = INT32_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            int mx = max(arr[i], arr[i + 1]);
            mn = min(mx, mn);
        }
        cout << mn - 1 << endl;
    }
}