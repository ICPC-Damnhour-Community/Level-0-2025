#include <bits/stdc++.h>
using namespace std;

#define bye return 0

int main() {
    int n;
    cin >> n;
    int f = 0, th = 0, two = 0, one = 0, x;
    while(n--){
        cin >> x;
        f += (x == 4);
        th += (x == 3);
        two += (x == 2);
        one += (x == 1);
    }
    int sum = 0;
    sum += f;
    sum += th;
    one -= th; // 3 - 2 = 1
    sum += (two+1) / 2;
    if(two % 2 == 1){
        one-=2; // 1 - 2 = -1
    }
    if(one > 0)
        sum += (one+3)/4;
    cout << sum;
    bye;
}