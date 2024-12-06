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
        int flag = 1;
        for (int i = 0; i < n - 1; i++)
        {
            int diff = abs(arr[i] - arr[i + 1]);
            if (diff != 5 && diff != 7)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
