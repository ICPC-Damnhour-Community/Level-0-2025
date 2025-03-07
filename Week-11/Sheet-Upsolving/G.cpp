#include <iostream>
#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fast
        int n; cin>>n;
        set<int>s;
        for(int i=0;i<n;i++) {
            int x; cin>>x;
            s.insert(x);
        }
        if(s.size()==1)cout<<"NO\n";
        else {
            auto it=s.begin();
            it++;
            cout<<*it<<"\n";
        }
 
    return 0;
}