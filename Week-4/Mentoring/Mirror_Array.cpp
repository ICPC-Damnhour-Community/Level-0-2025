#include <bits/stdc++.h>
using namespace std;
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define endl "\n"
void ip()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int main() {
    ip();
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }

    }
 for(int i = 0; i < n; i++)
    {
        for(int j = m - 1; j >= 0; j--)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }



}