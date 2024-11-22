#include <bits/stdc++.h>
using namespace std;
#define bye return 0

int main() {
    int M, D;
    cin >> M >> D;
    int y, m, d;
    cin >> y >> m >> d;
    int y1 = y, m1 = m, d1 = d;
    if(d == D){
        d1 = 1;
        m1++;
    } else
        d1++;
    if(m == M and D == d){
        m1 = 1;
        y1++;
    }
    cout << y1 << ' ' << m1 << ' ' << d1;
    bye;
}
