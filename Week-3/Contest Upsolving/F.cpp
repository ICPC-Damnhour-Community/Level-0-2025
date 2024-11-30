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
        int count = 0;
        while (true)
        {
            if (n == 1)
            {
                cout << count << endl;
                break;
            }
            else if (n % 6 == 0)
            {
                n /= 6;
                count++;
            }
            else if (n % 3 != 0)
            {
                cout << -1 << endl;
                break;
            }
            else
            {
                n *= 2;
                count++;
            }
        }
    }
}