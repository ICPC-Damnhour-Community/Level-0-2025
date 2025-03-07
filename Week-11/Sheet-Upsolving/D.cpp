#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define T int T; cin >> T; while(T--)
#define fr for(int i = 0 ; i < s.size() ; ++i)
#define ll long long
#define endl '\n'

int main() {
   stack <char> stk;
    string s ;
    cin >> s;
    int cnt = 0 ;
    fr{
      if(s[i] == '('){
         stk.push(s[i]);
      }
      else if(s[i] == ')'){
         if(!stk.empty()){
            stk.pop();
            cnt+=2;
         }
      }

    }

    cout << cnt << endl;
   return 0 ; 
}
