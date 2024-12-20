#include <bits/stdc++.h>
using namespace std;

int main() {
    string x ;
    getline(cin,x);
    string s ;
    for(int i = 0 ; i < x.size() ;i++){
        if(x[i]>='a'&&x[i]<='z'){
            s+=x[i];
        }
    }
    sort(s.begin(),s.end());
    int cnt = 0 ;
    for(int j = 1 ; j < s.size() ;j++){
        if(s[j]!=s[j-1]){
            cnt++;
        }
    }
    if(!s.empty()){cnt++;}
    cout << cnt << endl;
    return 0;
}
