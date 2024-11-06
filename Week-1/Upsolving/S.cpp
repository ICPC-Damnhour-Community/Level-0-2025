#include <bits/stdc++.h>
using namespace std;

#define int long long

int main() {

    int n;
    cin >> n;
    int x = (n%100);
    if(x < 10)
        cout << 0;
    cout << x;
    
    return 0;
}