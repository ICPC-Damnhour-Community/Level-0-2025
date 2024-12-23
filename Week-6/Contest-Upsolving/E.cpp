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
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(s.substr(0, s.size()/2) == s.substr(s.size()/2))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    bye;
}
