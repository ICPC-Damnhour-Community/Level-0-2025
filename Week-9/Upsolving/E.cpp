#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define  ll long long
using namespace std;

int main() {
    int t ;
    cin >> t ;
    while(t--)
    {
    int score[10][10] =
    {
    {1,1,1,1,1,1,1,1,1,1},
    {1,2,2,2,2,2,2,2,2,1},
    {1,2,3,3,3,3,3,3,2,1},
    {1,2,3,4,4,4,4,3,2,1},
    {1,2,3,4,5,5,4,3,2,1},
    {1,2,3,4,5,5,4,3,2,1},
    {1,2,3,4,4,4,4,3,2,1},
    {1,2,3,3,3,3,3,3,2,1},
    {1,2,2,2,2,2,2,2,2,1},
    {1,1,1,1,1,1,1,1,1,1},
    };
    int target = 0 ;
    for(int i = 0 ; i < 10 ;i++){
        for(int j = 0 ; j < 10 ; j++){
            char c ;
            cin >> c ;
            if(c == 'X'){
                target += score[i][j];
            }
        }
    }
    cout << target << endl;
    }
   return 0 ; 
}
