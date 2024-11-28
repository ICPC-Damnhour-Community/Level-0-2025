#include <bits/stdc++.h>
using namespace std;

#define bye return 0

int main() {
    int n;
    cin >> n;
    while(true){
        int sum = 0;
        int m = n;
        while(m > 0){
            sum += (m%10);
            m/=10;
        }
        if(sum%4 != 0)
            n++;
        else
            break;
    }
    cout << n;
    bye;
}
