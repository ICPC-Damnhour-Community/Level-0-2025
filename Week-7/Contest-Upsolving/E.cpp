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
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        string s;
        cin >> s;
        for (int j = 0; j < x; j++)
        {
            if (s[j] == 'U')
            {
                if (arr[i] == 0)
                {
                    arr[i] = 9;
                }
                else
                {
                    arr[i]--;
                }
            }
            else
            {
                if (arr[i] == 9)
                {
                    arr[i] = 0;
                }
                else
                {
                    arr[i]++;
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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