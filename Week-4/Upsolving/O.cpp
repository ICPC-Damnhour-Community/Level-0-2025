#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    string s; cin >> s;

    int res = 0; // RRRG
    for(int i = 1; i < n; i++){
        if(s[i] == s[i - 1]) res++;
    }
    cout << res << endl;
    
    return 0;
}