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

void fun(int arr[],int size,int x)
{
    for(int i = size - x; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    for(int i = 0; i < size - x; i++)
    {
        cout << arr[i] << " ";
    }
}
int main() {
    ip();
     int n, x;
     cin >> n >> x;
     int a[n];
     for(int i = 0; i < n; i++) cin >> a[i];
    int shift = x % n;
    fun(a,n,shift);
}
