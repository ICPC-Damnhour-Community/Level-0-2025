#include <iostream>
#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fast
    int n;cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++) {
        int x; cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    return 0;
}