#include <iostream> 
#include <algorithm>

using namespace std;


void solve() {
    int n, m; cin >> n >> m;
    int a[n];
    for(int i = 0; i < n; i++){
        string s; cin >> s;
        a[i] = s.size();
    }

    int res = 0;
    for(int i = 0; i < n; i++){
        if(m - a[i] >= 0) m -= a[i], res++;
        else break;
    }
    
    cout << res << endl;
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