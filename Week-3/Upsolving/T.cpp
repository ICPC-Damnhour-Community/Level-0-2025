#include <bits/stdc++.h>
using namespace std;

#define bye return 0

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n % 2 == 0)
            cout << "Sakurako\n";
        else
            cout << "Kosuke\n";
    }
    bye;
}