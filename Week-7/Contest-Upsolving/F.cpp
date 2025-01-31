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
    char arr[8][8];
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 8; i++)
    {
        int flag = 0;
        for (int j = 0; j < 8; j++)
        {
            if (arr[i][j] != 'R')
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "R\n";
            return;
        }
    }
    cout << "B\n";
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