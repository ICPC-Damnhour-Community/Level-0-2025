#include <iostream>
#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fast
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
 
    for(int i=0;i<n;i++) {
        if(i==0)
            cout<<v[1]-v[0]<<" "<<v[n-1]-v[0]<<"\n";
        else if(i==n-1)
            cout<<v[n-1]-v[n-2]<<" "<<v[n-1]-v[0]<<"\n";
        else
            cout<<min(v[i]-v[i-1],v[i+1]-v[i])<<" "<<max(v[n-1]-v[i],v[i]-v[0])<<"\n";
    }
    return 0;
}