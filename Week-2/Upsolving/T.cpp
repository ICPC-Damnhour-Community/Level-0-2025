#include <bits/stdc++.h>
using namespace std;
#define bye return 0

int main() {
    string s;
    cin >> s;
    if(s == "RRR")
        cout << 3;
    else if(s == "SSS")
        cout << 0;
    else if(s == "RRS" or s == "SRR")
        cout << 2;
    else
        cout << 1;

    bye;
}
