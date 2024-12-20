#include <iostream> 
#include <algorithm>

using namespace std;

int main() {
    string s; cin >> s;

    for(int i = 0; i < s.size(); i++){
        int num = s[i] - '0';
        int x = min(num, 9 - num);
        
        if(x == 0 && i == 0) cout << num;
        else cout << x;
    }
    return 0;
}