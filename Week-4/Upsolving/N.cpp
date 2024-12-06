#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;

    int res = 0;
    int a[n];
    for(int i = 0; i < n; i++){
        bool p, v, t; cin >> p >> v >> t;
        a[i] = p + v + t;
        res += (a[i] >= 2);
    }
    cout << res << endl;
    
    return 0;
}