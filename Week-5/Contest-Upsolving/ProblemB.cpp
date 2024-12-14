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
    sort(a,a+n);
    int cnt=1,ans=-1;
    for(int i=0;i<n-1;i++){
        if(a[i]==a[i+1]){
            cnt++;
        }else{
            cnt=1;
        }
        if(cnt>=3){
            ans=a[i];
            break;
        }
    }

    cout<<ans<<endl;
    }

}
