#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        long long sum =0;
        long long n2 = 0;
        long long n3 = 0;
        for(int i=0; i<s.size(); i++){
            sum+=(s[i] - '0');
            if(s[i] == '2'){
                n2++;
            }
            else if(s[i] == '3'){
                n3++;
            }
        }

        if(sum % 9 == 0){
            cout<<"YES\n";
            continue;
        }

        bool flag = 0;
        for(int i=0; i<=n2; i++){
            for(int j=0; j<=n3; j++){
                if((sum + (i*2) + (j*6)) %9 == 0){
                    flag =1;
                }
            }
        }

        (flag == 1) ? cout<<"YES\n" : cout<<"NO\n";
    }
    return 0;
}

