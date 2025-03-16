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
        string s, s1="abc";
        cin>>s;
        int c=0;
        for(int i=0;i<3;i++){
            if(s[i]!=s1[i]){
                c++;
            }
        }
        if(c==0||c==2){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}
