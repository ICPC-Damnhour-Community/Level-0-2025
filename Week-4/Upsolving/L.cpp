#include <iostream>

using namespace std;

int main() {
    int n, h; cin >> n >> h;
    int a[n];
    int res = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] > h) res += 2;
        else res++;
    }

    cout << res << endl;

    return 0;
}