#include <iostream>
#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fast
    string s;
    stack<string>h;
    int t; cin>>t; while(t--) {
         int op; cin>>op;
        if(op==1) {
            string w; cin>>w;
            h.push(s);
            s+=w;
        }

        else if(op==2) {
            int k; cin>>k;
            h.push(s);
            s.erase(s.size()-k);
        }

        else if(op==3) {
            int k; cin>>k;
            cout<<s[k-1]<<"\n";
        }

        else {
            if(!h.empty()) {
                s= h.top();
                h.pop();
            }
        }
    }
    return 0;
}