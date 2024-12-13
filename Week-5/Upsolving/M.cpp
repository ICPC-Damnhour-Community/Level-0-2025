#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int res = 0, cap = 0;
    for(int i = 0; i < n; i++){
        int a, b; cin >> a >> b;
        cap = cap - a + b;
        //cout << cap << endl;
        res = max(res, cap);
    }
    cout << res << endl;

}