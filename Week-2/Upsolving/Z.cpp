#include <bits/stdc++.h>
using namespace std;
#define bye return 0

int main() {
    long double n;
    cin >> n;
    if(n <= 127)
        cout << "byte";
    else if(n <= 32767)
        cout << "short";
    else if(n <= 2147483647)
        cout << "int";
    else if(n <= 9223372036854775807)
        cout << "long";
    else
        cout << "BigInteger";
    bye;
}
