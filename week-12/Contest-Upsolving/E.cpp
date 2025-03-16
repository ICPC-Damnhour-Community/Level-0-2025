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
        int n,m;
        cin>>n>>m;
        int x=0,c=0;
        string s[n];
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        for(int i=0;i<n;i++){
            if(c+s[i].size()<=m){
                c+=s[i].size();
                x++;
            }else{
                break;
            }
        }
        cout<<x<<endl;
    }
}
