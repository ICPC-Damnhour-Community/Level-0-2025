#include <iostream> 
#include <algorithm>

using namespace std;

int main() {
    string s; cin >> s;
    int end = s.size() - 1; // 6

    while(s[end] == '0') end--; // 2

    string tmp = s;
    reverse(tmp.begin(), tmp.begin() + end + 1);

    //cout << tmp << " " << s << endl;
    if(tmp == s){
        cout << "Yes\n";
    }else{
        cout << "No\n";
    }





    return 0;
}