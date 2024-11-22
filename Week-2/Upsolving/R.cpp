#include <bits/stdc++.h>
using namespace std;
#define bye return 0

int main() {
    string s;
    cin >> s;
    if(s == "SAT")
        cout << 1;
    else if(s == "SUN")
        cout << 7;
    else if(s == "MON")
        cout << 6;
    else if(s == "TUE")
        cout << 5;
    else if(s == "WED")
        cout << 4;
    else if(s == "THU")
        cout << 3;
    else if(s == "FRI")
        cout << 2;
    bye;
}
