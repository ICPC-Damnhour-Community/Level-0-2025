#include <bits/stdc++.h>
#include <string>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define  ll long long
using namespace std;
bool IS_palindrome(string s){
    string t = s ;
    reverse(t.begin(),t.end());
    if(t == s){
        return 1 ;
    }
    else{
        return 0 ;
    }
}
int main() {
    int t ;
    cin >>  t;
    while(t--){
        string org ; // 03:12
        int n ;
        cin >> org >> n ;
        string h , m ;
        h = org.substr(0,2); // 03
        m = org.substr(3,2); // 12
        int oh = stoi(h);
        int om = stoi(m);
        int nh = oh ;
        int nm = om ;
        int cnt = 0 ;
        if(IS_palindrome(h + m)){
            cnt++;
        }
        while(1){
            oh += (n / 60);
            om += (n % 60);
            if(om >=60){
                oh += (om / 60);
                om %= 60 ;
            }
            if(oh >= 24){
                oh %= 24 ;
            }
            if(nh == oh && nm == om){
                break;
            }
            string final ;
            string final_h = to_string(oh);
            string final_m = to_string(om);
            if(final_h.size() == 1){
                final += '0' ;
                final += final_h ;
            }
            else{
                final += final_h ;
            }
            if(final_m.size() == 1){
                final += '0' ;
                final += final_m ;
            }
            else{
                final += final_m ;
            }
            if(IS_palindrome(final)){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
   return 0 ; 
}
