#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        int x[4]; int y[4];
        for(int i=0; i<4; i++){
            cin>>x[i]>>y[i];
        }

        long long l;
        if(x[0] == x[1]){
            l = abs(y[0] - y[1]);
        }
        else {
            l = abs(x[0] - x[1]);
        }

        cout<<(l * l)<<"\n";

    }
    return 0;
}

