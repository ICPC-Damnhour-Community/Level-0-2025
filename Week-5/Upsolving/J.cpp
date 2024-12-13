#include <iostream>
#include <algorithm>
#include <bitset>

using namespace std;

const int OO = 0x3f3f3f3f;

int main() {
    int n, m; cin >> n >> m;
    int a[m + 1]; // 0 1 2 3 4 5 6
    
    for(int i = 1; i <= m; i++){
        cin >> a[i];
    }

    sort(a + 1, a + m + 1); 

    int res = OO;
    for(int i = 1; i + n - 1 <= m; i++){
        int A = a[i];
        int B = a[i + n - 1];

        res = min(res, B - A);
    }
    cout << res << endl;
}