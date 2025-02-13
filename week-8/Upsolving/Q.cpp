#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int day(int n, int d = 1, ll sum = 0) {
    sum += d;
    if (sum >= n) return d;
    return day(n, d + 1, sum);
}

int main() {
    fast;
    
    ll n;
    cin >> n;
    cout << day(n);
    
    return 0;
}
