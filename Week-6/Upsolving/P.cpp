#include <iostream> 
#include <algorithm>

using namespace std;


void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int mx = -1, mn = 11; // count
    char chMx = s[0], chMn = s[s.size() - 1]; // value of char

    for(char c = 'a'; c <= 'z'; c++){
        int cnt = count(s.begin(), s.end(), c);

        if(!cnt) continue;

        if(cnt > mx){
            mx = cnt;
            chMx = c;
        }
    }

    for(char c = 'a'; c <= 'z'; c++){
        int cnt = count(s.begin(), s.end(), c);

        if(!cnt) continue;

        if(c != chMx && cnt < mn){
            mn = cnt;
            chMn = c;
        }
    }

    int pos = find(s.begin(), s.end(), chMn) - s.begin();

    s[pos] = chMx;

    cout << s << endl;

}

int main() {
    int t; 
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}

/*





*/