#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[k];
        for (int i = 0; i < k; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + k);
        int count = 0;
        for (int i = 0; i < k - 1; i++)
        {
            if (arr[i] == 1)
            {
                count++;
            }
            else
            {
                count += (2 * arr[i] - 1);
            }
        }
        cout << count << endl;
    }
}