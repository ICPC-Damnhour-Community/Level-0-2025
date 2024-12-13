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
int main()
{
    ip();
    test{
        int n;
        cin >> n;
        int a[n];
        for (int &i: a) cin >> i;
        int res = 0, ctr = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] >= a[i - 1]) {
                ctr++;
            } else {
                res += ctr * (ctr + 1) / 2;
                ctr = 1;
            }
        }
        if(ctr) res +=ctr * (ctr + 1) / 2;

                cout << res << endl;
    }
}