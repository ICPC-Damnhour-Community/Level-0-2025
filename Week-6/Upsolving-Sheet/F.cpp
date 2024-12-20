#include <bits/stdc++.h>
using namespace std;

int main() {
    int t ;
    cin >> t ;
    while(t--){
        string s ;
        cin >> s;
        for(int i = 2;i < s.size() ;i++){
            s.erase(i,1);
        }
        cout << s << endl;
    }
    return 0;
}

