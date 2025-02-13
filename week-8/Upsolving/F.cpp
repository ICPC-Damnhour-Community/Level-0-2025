#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define  ll long long
using namespace std;

int main() {
    int t ;
    cin >> t;
    while(t--){
        int d ;
        cin >> d ;
        if(d > 0 && d < 4){
            cout << "N" << endl;
        }
        else{
        double a =( d + sqrt((d * d) - (d *4))) / 2 ;
        double b = ( d - sqrt((d * d) - (d *4))) / 2 ;
        cout << "Y " << fixed << setprecision(9) << a << " " << b << endl;
        }
    }
   return 0 ; 
}
