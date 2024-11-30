#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    n++;
    int a = n % 10, b = (n / 10) % 10, c = (n / 100) % 10, d = (n / 1000) % 10;
    while (a == b || a == c || a == d || b == c || b == d || c == d)
    {
        n++;
        a = n % 10, b = (n / 10) % 10, c = (n / 100) % 10, d = (n / 1000) % 10;
    }
    cout << n << endl;
}