#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define T int T; cin >> T; while(T--)
#define fr for(int i = 0 ; i < s.size() ; ++i)
#define ll long long
#define endl '\n'

int main() {
   int n ;
   cin >> n ;
   vector <int> a(n) , b(n), pos(n),final(n);
   for(int i = 1 ; i <=n ;i++){
      cin >>a[i];
   }
   for(int i = 1 ; i <=n ;i++){
      cin >>b[i];
   }
   for(int i = 1 ; i <=n ;i++){
      pos[b[i]] = i ;
    // cout << pos[b[i]];
   }
   for(int i = 1 ; i <=n ;i++){
      final[i] = pos[a[i]] ;
      //cout << final[i];
   }
   int mx = -1 , cnt = 0 ;
   for(int i = 1 ; i <= n ; i++){
      if(final[i] > mx){
         mx = final[i] ;
      }
      else{
         cnt++;
      }
   }
   cout << cnt << endl;

   return 0 ; 
}
