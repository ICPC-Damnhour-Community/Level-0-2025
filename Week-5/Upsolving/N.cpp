#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int mxIdx = max_element(a, a + n) - a;       
    reverse(a, a + n); 
    int mnIdx = n - 1 - (min_element(a, a + n) - a);

    cout << mxIdx + (n - 1 - mnIdx) - (mxIdx > mnIdx);

}