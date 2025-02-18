#include <iostream>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        long long have, mn, mx;
        cin >> have >> mn >> mx;
        cout << min(have - mn, mx) << endl;
    }
}