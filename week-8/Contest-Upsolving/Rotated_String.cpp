#include <iostream>
using namespace std;
void shift(int n,int x[]){
    int tmp = x[0];
    for(int i = 0; i < n; i++) x[i] = x[i + 1];
    x[n] = tmp;
}
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