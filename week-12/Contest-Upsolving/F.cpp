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
        string s;
        cin>>s;
        int ind[m];
        for(int i=0;i<m;i++){
            cin>>ind[i];
            ind[i]--;
        }
        string c;
        cin>>c;
        sort(c.begin(),c.end());
        sort(ind,ind+m);
        s[ind[0]]=c[0];
        for(int i=1,j=1;i<m;i++){
            if(ind[i]==ind[i-1])
                continue;

            s[ind[i]]=c[j];
            j++;
        }
        cout<<s<<endl;

    }
}
