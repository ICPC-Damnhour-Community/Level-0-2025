#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    char s[n];
    int cntA = 0, cntD = 0;
    for(int i = 0; i < n; i++){
        cin >> s[i];
        if(s[i] == 'A') cntA++;
        else cntD++;
    }

    if(cntA > cntD) cout << "Anton\n";
    else if(cntD > cntA) cout << "Danik\n";
    else cout << "Friendship";
    
    return 0;
}