#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define T int T; cin >> T; while(T--)
#define fr for(int i = 0 ; i < s.size() ; ++i)
#define ll long long
#define endl '\n'

int main() {
   stack <int> s ;
   fast;
   int t ;
   cin >> t ;
   while(t--){
      ll n ;
      cin >> n;
      if(n == 1){
         int x ;
         cin >> x ;

         s.push(x);
      }
      else if (n == 2){
         if(!s.empty()){
            s.pop();
         }
      }
      else if(n == 3 && !s.empty()){
         cout << s.top() <<endl;
      }
      else if(n == 3 && s.empty()){
         cout <<"Empty!" <<endl;
      }
   }
   return 0 ; 
}
