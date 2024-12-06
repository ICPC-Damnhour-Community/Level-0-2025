#include <iostream>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for(int i = 1; i <= n; i++){ // 1 2 3 4 5
        cin >> a[i];
    }

    int m; cin >> m;
    while(m--){
        int x, y; cin >> x >> y;

        if(x > 1) a[x - 1] += (y - 1);
        if(x < n) a[x + 1] += (a[x] - y);
        a[x] = 0;
    }

    for(int i = 1; i <= n; i++){
        cout << a[i] << endl;
    }

    return 0;
}