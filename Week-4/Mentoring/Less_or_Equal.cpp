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
    int n, k;
    cin >> n >> k;
    int a[n];
    // 3
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);

    // 4 0
    // 2 3 4 6

    if(k == 0)
    {
        if(a[0] == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << a[0] - 1 << endl;
        }
    }
    else
    {

    if (a[k - 1] == a[k]) {
        cout << -1 << endl;
    } else {
        cout << a[k - 1] << endl;
     }
    }


}