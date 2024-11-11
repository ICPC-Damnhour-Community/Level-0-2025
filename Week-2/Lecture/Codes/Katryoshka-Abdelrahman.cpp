#include <iostream>
using namespace std;

int main() {
    long long n, m, k;
    cin >> n >> m >> k;

    long long type3, type1, rem_n, rem_k;
    if (n <= m && n <= k) {
        type3 = n;
    } else if (m <= n && m <= k) {
        type3 = m;
    } else {
        type3 = k;
    }

    rem_n = n - type3;
    rem_k = k - type3;
    if (rem_n / 2 >= rem_k){
        type1 = rem_k;
    }
    else{
        type1 = rem_n / 2;
    }

    long long L = type1 + type3;

    cout << L << endl;
    return 0;
}