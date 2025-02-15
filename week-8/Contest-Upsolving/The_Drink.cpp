#include <iostream>
using namespace std;

int main() {
    int test;
    cin >> test;
    while (test--) {
        int have, need;
        cin >> have >> need;
        cout << (have < need ? need - have : 0) << endl;
    }
}