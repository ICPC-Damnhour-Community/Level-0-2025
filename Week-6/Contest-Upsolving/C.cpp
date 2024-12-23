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
    int cnt = s.size();
    for(int i=0; i<s.size(); i++){
        for(int j = i+1; j< s.size(); j++){
            if(s[i] == s[j]) {
                cnt--;
                break;
            }
        }
    }
    if(cnt%2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    bye;
}
