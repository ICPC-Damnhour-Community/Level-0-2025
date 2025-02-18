#include <iostream>
using namespace std;

int main() {
    int n,x;
    cin >> n >> x;
    string s,t;
    cin >> s >> t;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        if (s[i] != t[(i + x) % n] ) ans++;
    }
    cout << ans << endl;
}
