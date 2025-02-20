#include <iostream>
#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
    fast
    int t;
    cin>>t;
    while(t--){
        int n,k,sum=0;
        cin >> n >> k;
        int a[k];
        for(int i = 0; i < k ; i++){
            cin >> a[i];
        }
        sort(a , a + k );
        for(int i=0; i < k - 1 ;i++){
            sum + = ( a[i] - 1 ) + a[i];
        }
        cout << sum << endl;
    }
    return 0;
}