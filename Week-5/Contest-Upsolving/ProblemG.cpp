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
    int t=0;
    cin>>t;
    while(t--){
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    cout<<a[1]<<endl;
    }

}


