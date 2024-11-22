#include <bits/stdc++.h>
using namespace std;
#define bye return 0

int main() {
    int n;
    cin >> n;
    int x = n * (1.08);
    if(x < 206)
        cout << "Yay!";
    else if(x > 206)
        cout << ":(";
    else
        cout << "so-so";
    bye;
}
