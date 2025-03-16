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
    int n;
    cin>>n;
    priority_queue<int, vector<int>, greater<int> >pq;
    vector<pair<string,int>>v;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        if(s=="insert"){
            int x;
            cin>>x;
            pq.push(x);
            v.emplace_back(s,x);
        }else if(s=="getMin"){
            int x;
            cin>>x;
            while(!pq.empty()&&pq.top()<x){
                pq.pop();
                v.emplace_back("removeMin",INT_MAX);
            }
            if(pq.empty()||pq.top()>x){
                pq.push(x);
                v.emplace_back("insert",x);
            }
            v.emplace_back(s,x);

        }else{
            if(pq.empty()){
                v.emplace_back("insert",0);
            }else{
                pq.pop();
            }
            v.emplace_back("removeMin",INT_MAX);
        }

    }
    cout<<v.size()<<endl;
    for(auto i: v){
        cout<<i.first;
        if(i.second!=INT_MAX){
            cout<<" "<<i.second<<endl;
        }else{
            cout<<endl;
        }
    }
}
