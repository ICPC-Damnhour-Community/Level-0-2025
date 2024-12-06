#include <bits/stdc++.h>
using namespace std;

#define bye return 0

int32_t main() {
    int t;
    cin >> t;
    while(t--){
        int n, m, k, H;
        cin >> n >> m >> k >> H;
        int steps[m+2];

        for (int i = 1; i <= m; i++) {
            for(int j=i+1; j <= m; j++)
                steps[i] = abs(j - i) * k; // (1 -- m)
        }
        int h[n];
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            cin >> h[i];
            h[i] = abs(h[i] - H);
            for(int j=1; j<= m; j++){
                if(h[i] == steps[j])
                    cnt++;
            }
        }
        cout << cnt << '\n';
    }
    bye;

}