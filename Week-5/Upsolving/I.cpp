#include <iostream>

using namespace std;

bool amazing (int points, int &mn, int &mx){
    if(points < mn){
        mn = points;
        return 1;
    }
    if(points > mx){
        mx = points;
        return 1;
    }
    return false;
}

int main() {
    int n; cin >> n;
    int a[n]; // points
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int res = 0;
    
    int mn = a[0], mx = a[0];
    for(int i = 1; i < n; i++){
        res += amazing(a[i], mn, mx);
    }
    cout << res << endl;

}