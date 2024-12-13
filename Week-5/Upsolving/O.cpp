#include <iostream>
#include <algorithm>

using namespace std;

void solve(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);

    int score = 0;
    for(int i = 0; i + 1 < n; i++){
        if(a[i] == a[i + 1]){
            score++;
            i++;
        }
    }
    cout << score << endl;
}

int main() {
    int t = 1; 
    //cin >> t;
    while(t--){
        solve();
    }
}