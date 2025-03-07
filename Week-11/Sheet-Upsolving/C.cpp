#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define T int T; cin >> T; while(T--)
#define fr for(int i = 0 ; i < s.size() ; ++i)
#define ll long long
#define endl '\n'

int main() {
    int t ;
    cin >> t;
    while(t--){
      vector <int> k;
      for(int i = 1 ; i < 1670 ;i++){
         if(i % 3 != 0 && i % 10 !=3){
            k.push_back(i);
         }
      }
      int n ;
      cin >> n;
      cout << k[n-1] << endl;
    }
   return 0 ; 
}
