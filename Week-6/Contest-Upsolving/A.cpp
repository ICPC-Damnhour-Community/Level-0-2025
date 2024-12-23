#include <bits/stdc++.h>
using namespace std;
void InOutFast() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
}

#define bye return 0
#define int long long
int32_t main(){
    InOutFast();
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        if(k > n){
            cout << "NO\n";
            continue;
        }
        if(n%2 == 0){
            if(k % 2 == 0){
                cout << "YES\n";
                for(int i=0; i<k-1; i++)
                    cout << 1 << ' ';
                cout << n - (k-1) << '\n';
                continue;
            }
            if(k > n/2){
                cout << "NO\n";
                continue;
            }
            cout << "YES\n";
            for(int i=0; i<k-1; i++)
                cout << 2 << ' ';
            cout << n - (2 * (k-1)) << '\n';
            continue;
        }
        else{
            if(k %2 == 0){
                cout << "NO\n";
                continue;
            }
            cout << "YES\n";
            for(int i=0; i<k-1; i++)
                cout << 1 << ' ';
            cout << n - (k-1) << '\n';
        }
    }
    bye;
}
