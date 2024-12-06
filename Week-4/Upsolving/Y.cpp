#include <bits/stdc++.h>
using namespace std;

#define bye return 0

int32_t main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int cnt = 0;
        for(int i=0; i < 4; i++){
            if(i == 0){
                int a = s[i] - '0';
                if(a == 0)
                    a = 10;
                cnt += abs(a - 1) + 1;
                continue;
            }
            int a = (s[i] - '0');
            int b = (s[i-1]  - '0');
            if(a == 0)
                a = 10;
            if(b == 0)
                b = 10;
            cnt += abs(a - b) + 1;
        }
        cout << cnt << '\n';
    }
    bye;

}