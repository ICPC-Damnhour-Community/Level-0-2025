#include <iostream> 
#include <algorithm>

using namespace std;

int main() {
    int n; cin >> n;
    string s; cin >> s;

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    //cout << s << endl;

    int cnt = 0;
    for(char c = 'a'; c <= 'z'; c++){
        cnt += (s.find(c) != string::npos);
    }

    cout << (cnt == 26 ? "YES" : "NO");





    return 0;
}