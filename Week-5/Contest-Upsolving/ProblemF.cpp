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
    int n;
    cin>>n;
    int c5=0,c0=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(x==5){
            c5++;
        }else{
            c0++;
        }
    }
    c5=c5-(c5%9);
    if(c0<1){
        cout<<-1;
    }else if(c5==0){
        cout<<0<<endl;
    }else {
        for(int i=0;i<c5;i++){
            cout<<5;
        }
        for(int i=0;i<c0;i++){
            cout<<0;
        }

    }


}


