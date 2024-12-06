#include <bits/stdc++.h>
using namespace std;

#define bye return 0

int32_t main() {
    int k, r;
    cin >> k >> r;
    int i = 1;
    while((k*i) % 10 != r and (k*i)%10 != 0){
        i++;
    }
    cout << i;
    bye;

}