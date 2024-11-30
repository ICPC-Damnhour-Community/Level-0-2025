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
        int tot = 1;
        int mn = 10;
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 0 && flag == 0)
            {
                flag = 1;
                tot *= 1;
            }
            else
            {
                tot *= x;
                mn = min(mn, x);
            }
        }
        if (flag == 0)
        {
            tot = (tot / mn) * (mn + 1);
        }
        cout << tot << endl;
    }
}