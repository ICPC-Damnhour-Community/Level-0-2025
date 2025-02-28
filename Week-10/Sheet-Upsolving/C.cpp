#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define  ll long long
using namespace std;

int main() {
    int t ;
    cin >> t ;
    while(t--){
            int n ;
            cin >> n;
            vector<pair<int , int>> res;
            pair <int,int> x = make_pair(1,2);
            pair <int , int> y = make_pair(1, 1);
            res.push_back(x);
            res.push_back(y);
            for(int i = 0 ; i <= n - 1 ; i++){
                if(i == 0){
                    y.second+=2;
                    y.first+=2;
                }
                else{
                    y.second++;
                    y.first++;
                }
                res.push_back(y);
            }
            for (int i = 0 ; i < n ; i++){
                cout << res[i].first << " " << res[i].second << endl;
            }
        }
   return 0 ; 
}
