#include <bits/stdc++.h>
using namespace std;

#define int long long

int main() {

    int n;
    cin >> n;
    int H = n/100;
    n -= (H*100);

    int twen = n/20;
    n -= (twen * 20);

    int ten = n/10;
    n-=(ten*10);

    int five = n /5;
    n-= (five*5);


    cout << H + twen + ten + five + n;

    return 0;
}