#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int s[4];
    
    for(int i = 0; i < 4; i++){
        cin >> s[i];
    }

    sort(s, s + 4);

    cout << 4 - (unique(s, s + 4) - s) << endl;

}