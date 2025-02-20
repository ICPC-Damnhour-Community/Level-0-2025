#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define  ll long long
using namespace std;

int main() {
    int t ;
    cin >> t ;
    while(t--){
        char chess [8][8] ;
            for(int i = 0 ; i < 8 ; i++){
                for(int j = 0 ; j < 8 ; j++){
                    cin >> chess[i][j];
                }
            } 
            for(int i = 1 ; i < 7 ; i++){
                for(int j = 1 ; j < 7 ; j++){
                    if(chess[i-1][j-1] == '#' && chess[i-1][j+1] == '#' && chess[i+1][j-1] == '#' && chess[i+1][j+1] == '#'){
                        cout << i+1 << ' ' << j+1 << endl;
                    }
                }
            }    
        }
   return 0 ; 
}
