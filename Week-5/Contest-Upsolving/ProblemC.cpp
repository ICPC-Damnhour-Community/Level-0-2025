#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define all(x) x.begin(), x.end()
#define endl '\n'
#define T  ll t ; cin >> t; while(t--)
int main() {
    fast
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool can=1;
    // a[n-1]==a[n+1]
    for(int i=0;i<n-2;i++){
        if(a[i]%2!=a[i+2]%2){
            can=0;
            break;
        }
    }
    if(can){
        cout<<"YES\n";
    }else{
    cout<<"NO\n";
    }
    }

}
