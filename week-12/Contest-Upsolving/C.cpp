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
        int p[n],t1[n];
        for(int i=0;i<n;i++){
            cin>>p[i];
            t1[i]=i+1;
        }
        if(n==1){
            cout<<-1<<endl;
            continue;
        }
        for(int i=0;i<n;i++){
            if(p[i]==t1[i]){
                if(i+1<n){
                    swap(t1[i],t1[i+1]);
                }else{
                    swap(t1[i],t1[i-1]);
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<t1[i]<<" ";
        }
        cout<<endl;
    }
}
