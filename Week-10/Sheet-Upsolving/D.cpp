#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define  ll long long
using namespace std;
void solve(){
    /*2 3
    0 4 2 == 0 2 4 
    1 5 3 == 1 3 5
    ans =={0 , 1}*/

    /*2 2
    1 2 ==  1 2
    0 3 == 0 3 
    ans == {1 , 0}*/
    int n , m ;
    cin >> n >> m ;
    int a[n][m] ;
    for(int i = 0 ; i < n ;i++){
        for(int j = 0 ; j < m ;j++){
            cin >> a[i][j] ;
        }
    }
    for(int i = 0 ; i < n ;i++){
        sort(a[i],a[i] + m);
    }
    vector <pair <int , int >> ans;
    for(int i = 0 ; i < n ;i++){
        int x = a[i][0] ;
        ans.push_back({x,i});
        for(int j = 1 ; j < m ;j++){
            if(a[i][j] - a[i][j - 1] != n){
                cout << -1 << endl;
                return ;
            }
        }
    }
        sort(ans.begin(),ans.end());
        for(int i = 0 ; i < n ;i++){
            cout << ans[i].second + 1 << " ";
        }
        cout << endl;
    
}
int main() {
    int t ;
    cin >> t ;
    while(t--){
       
        solve();
        }
   return 0 ; 
}
