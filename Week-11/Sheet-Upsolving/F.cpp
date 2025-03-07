#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define T int T; cin >> T; while(T--)
#define fr for(int i = 0 ; i < n ; ++i)
#define ll long long
#define endl '\n'
void solve(){
   int  n ;
   cin >> n;
   vector <int> a(n) , pos(n+1);
   fr{
      cin >> a[i];
      pos[a[i]] = i ;
     // cout << pos[a[i]] ;
   }
   //cout << endl;
   int mx = pos[n], bs = n ;
   //cout << mx << " " << bs << endl;
   for(int i = n ; i > 0 ; i--){
      if(pos[i] > mx){
         continue;
      }
      mx = pos[i];
     // cout << mx << " " << pos[i] <<endl;
         for(int j = mx ; j < bs ; j++){
            cout << a[j] << " ";
         }
      bs = mx ;
      //cout << bs<<endl;
   }
   cout << endl;
}
int main() {
    int t ;
    cin >> t;
    while(t--){
      solve();
    }
   return 0 ; 
}
