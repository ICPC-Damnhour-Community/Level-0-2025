#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < 5; i++)
        {
            sort(arr, arr + 3);
            arr[0]++;
        }
        cout << arr[0] * arr[1] * arr[2] << endl;
    }
}