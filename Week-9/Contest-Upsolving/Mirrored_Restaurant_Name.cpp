#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        reverse( s.begin() , s.end() );
        for(int i=0; i<s.size() ;i++){
            if(s[i] == 'q'){
                s[i] = 'p';
            }
            else if(s[i] == 'p'){
                s[i] = 'q';
            }
        }
        cout<<s<<"\n";

    }
    return 0;
}

