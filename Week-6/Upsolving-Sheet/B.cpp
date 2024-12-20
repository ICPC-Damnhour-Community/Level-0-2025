#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , q ;
    cin >> n >> q ;
    string s ;
    cin >> s;
    while(q--){
        string fn ;
        cin >> fn ;
        if(fn=="pop_back"){
            s.pop_back();
        }
        else if(fn=="back"){
            cout << s.back() << endl;
        }
        else if(fn=="front"){
            cout << s.front() << endl;
        }
        else if(fn=="substr"||fn=="reverse"||fn=="sort"){
            int l , r ;
            cin >> l >> r;
            if(l > r){
                swap(l,r);
            }
            if(fn=="sort"){
                sort(s.begin()+l-1,s.begin()+r);
            }
            else if(fn=="reverse"){
                reverse(s.begin()+l-1,s.begin()+r);
            }
            else {
                cout << s.substr(l-1,r-l+1) << endl;
            }
        }
        else if(fn=="push_back"){
            char c ;
            cin >> c;
            s.push_back(c);
        }
        else{
            int pos ;
            cin >> pos ;
            cout << s[pos-1] << endl;
        }
    }
    return 0;
}
