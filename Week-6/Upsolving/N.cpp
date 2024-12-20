#include <iostream> 
#include <algorithm>

using namespace std;


void solve() {
    string s; cin >> s;
    sort(s.begin(), s.end());

    for(int i = 1; i < s.size(); i++){
        if(s[i] - s[i - 1] != 1){
            cout << "No\n";
            return;
        }
    }
    cout << "Yes\n";
}

int main() {
    int q; 
    cin >> q;
    while(q--){
        solve();
    }
    return 0;
}

/*





*/