#include <iostream>
#include<bits/stdc++.h>
#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fast
    string s; cin>>s;
    stack<char>st;
    int sum=0;
    for(char c:s) {
        if(st.empty()) st.push(c);
        else if(c!=st.top())  st.push(c);
        else {
            st.pop();
            sum++;
        }
    }
    if(sum%2==0)cout<<"No\n";
    else cout<<"Yes\n";
 
    return 0;
}