#include <iostream>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int n,m;
        string s;
        cin >> n >> m >> s;
        int tmp = 0;
        int sz = s.size();
        for(int i = 0; i < sz / 2; i++) {
            if (s[i] != s[sz - i - 1]) {
                tmp++;
            }
        }
        int ans = 0;
        while(m--)
        {
            int idx; char c;
            cin >> idx >> c;
            idx--;
            if(n == 1)
            {
                ans++;
                continue;
            }
            if(s[idx] == c){
                if(!tmp) ans++;
                continue;
            }
            char x = s[idx];
            s[idx] = c;
            if(s[idx] == s[n - idx - 1]) tmp--;
            if(s[n - idx - 1] == x) tmp++;
            if(!tmp) ans++;
        }
        cout << ans << endl;
    }
}