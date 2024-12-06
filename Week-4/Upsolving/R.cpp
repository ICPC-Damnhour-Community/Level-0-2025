#include <bits/stdc++.h>
using namespace std;

#define bye return 0

int32_t main() {
    int n;
    cin >> n;
    int p = 0, c = 0, x;
    for(int i=0; i<n; i++){
        cin >> x;
        if(x == -1){
            if(p > 0)
                p--;
            else
                c++;
        }
        else
            p += x;
    }
    cout << c;
    bye;

}