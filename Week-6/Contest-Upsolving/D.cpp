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
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    string v = "aoiuye";
    for(int i=0; i<s.size(); i++){
        if(count(v.begin(), v.end(), s[i]))
            continue;
        cout << '.' << s[i];
    }
    bye;
}
