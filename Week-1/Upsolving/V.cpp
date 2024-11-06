#include <bits/stdc++.h>
using namespace std;

#define int long long

int main() {

    int n;
    cin >> n;
    int five = n/5;
    n -= (five * 5);
    int four = n/4;
    n-= (four * 4);
    int three = n/3;
    n -= (three*3);
    int two = n/2;
    n -= (two * 2);
    cout << five + four + three + two + n;

    return 0;
}