#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    int mn = 101, mnIdx = -1, mx = -1, mxIdx = -1;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] <= mn){
            mn = a[i];
            mnIdx = i;
        }
        if(a[i] > mx){
            mx = a[i];
            mxIdx = i;
        }
    }

    int res = mxIdx + (n - 1 - mnIdx);
    
    if(mxIdx > mnIdx) res--;

    cout << res << endl;

    return 0;
}