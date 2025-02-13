#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define  ll long long
using namespace std;

int main() {
    int n ;
    cin >> n;
    string s ;
    cin >> s;
    n = s.size() ;
    int cnt = 0 ;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] == '0'){
            cnt++;
        }
    }
    cout << abs((n) - (cnt * 2));
   return 0 ; 
}
