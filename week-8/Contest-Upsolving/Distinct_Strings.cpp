#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s; cin >> s;
    int sz = s.size();
    cout << 26 * (sz + 1) - sz;
}