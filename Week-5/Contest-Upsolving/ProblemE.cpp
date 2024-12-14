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
    int n,t;
    cin>>n>>t;
    //n==1
    if(n==1){
        if(t<10){
            cout<<t<<endl;
        }else{
            cout<<-1<<endl;
        }
    }else{
        cout<<t;
        for(int i=0;i<n-1-(t==10);i++){
            cout<<0;
        }
    }

}
