/*
اللهم اشرح لي صدري ويسر لي أمري واحلل عقدة من لساني يفقهوا قولي
*/
#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define all(x) x.begin(), x.end()
#define endl '\n'
#define T  ll t ; cin >> t; while(t--)
#define ison(n,k) (((n)>>(k))&1)
int main() {
    fast
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        a[0]++;
        ll ans=a[0];
        for(int i=1;i<n;i++){
            ans*=a[i];
        }
        cout<<ans<<endl;
    }
}
