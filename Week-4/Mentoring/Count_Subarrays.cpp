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
    int t; cin >> t;
    while(t--){
       int n;
       cin >> n;
       int a[n];
       for(int i = 0; i < n; i++) cin >> a[i];

       int ctr = 0;
       for(int i = 0; i < n; i++)
       {
           for(int j = i + 1; j < n; j++)
           {
               if(a[j] > a[j - 1])
               {
                   ctr++;
               }
               else
               {
                   break;
               }
           }
       }
       cout << ctr + n << endl;

    }



}