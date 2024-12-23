#include <bits/stdc++.h>
using namespace std;
void InOutFast() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
}

#define bye return 0
#define int long long
int32_t main(){
    InOutFast();
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int mx = 0;
    for(char a = 'a'; a <= 'z'; a++){
        int cnt = 0;
        int x = 0;
        for(int i=0; i<n; i++){
            if(s[i] == a)
                x++;
            else
                x = 0;
            if(x == k)
                cnt++, x = 0;
        }
        mx = max(mx, cnt);
    }
    cout << mx;
    bye;
}
