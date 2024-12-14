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
        int k=0,num0=1;
        int a[5];
        while(n){
            int num=n%10;
            num*=num0;
            if(num!=0){
                a[k]=num;
                k++;
            }
            n/=10;
            num0*=10;
        }
        cout<<k<<endl;
        for(int i=0;i<k;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }

}
