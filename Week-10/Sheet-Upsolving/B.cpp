#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define  ll long long
using namespace std;

int main() {
    int t ;
    cin >> t ;
    while(t--){
            string s ;
            cin >> s ;
            int n = s.size() ;
            vector <int> upper , lower ;
            for(int i = 0 ; i < n ; i++){
               if(s[i] == 'b'){
                s[i] = '\0' ;
                    if(!lower.empty()){
                        s[lower.back()] = '\0' ;
                        lower.pop_back();
                    }
               }
               else if(s[i] == 'B'){
                s[i] = '\0' ;
                    if(!upper.empty()){
                        s[upper.back()] = '\0' ;
                        upper.pop_back();
                    }
               }
               else if (s[i] >= 'a' && s[i] <= 'z'){
                lower.push_back(i);
               }
               else if (s[i] >= 'A' && s[i] <= 'Z'){
                upper.push_back(i);
               }

            }
            string res ;
            for (char c : s){
                if (c != '\0'){
                    res += c;
                }
            }
            cout << res << endl;
    }
   return 0 ; 
}
