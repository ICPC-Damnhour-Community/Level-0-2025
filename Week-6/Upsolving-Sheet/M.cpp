#include <iostream> 
#include <algorithm>

using namespace std;


void solve() {
    string s, t; cin >> s >> t;
    int n = (int)s.size(), m = (int)t.size();
    for(int st = 0; st < n; st++){ // n
        for(int r = 0; st + r < n; r++){ // n
            int l = m - r - 1; // 3
            if(l < 0) continue;

            string cur = "";
            int mostIdxR = st + r, mostIdxL = mostIdxR - l;

            for(int i = st; i <= mostIdxR; i++) cur += s[i];
            for(int i = mostIdxR - 1; i >=  mostIdxL; i--) cur += s[i];

            if(cur == t){
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";

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
n = s.size
m = t.size
012345
abcdef
cdedcb

st = 2 -> (<n)
r = steps to rigth = 2 (st + r < n)
l = steps to left = 3 (l = m - r - 1 >= 0)


cur +=  
(2 -> 4)
str = st 
idxR = st + r 

cur +=  
(3 -> 1)
stl = idxR - 1  
idxL = idxR - l



cur == t -> "YES"




-> "NO"







*/