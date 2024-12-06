#include <iostream>

using namespace std;

int main() {
    int n; 
    int t = 1;
    while(cin >> n){
        if(n == 0) break;

        int a[n];
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }

        int h = sum / n;

        int res = 0;
        for(int i = 0 ; i < n; i++){
            if(a[i] > h) res += (a[i] - h);
        }

        cout << "Set #" << t << endl;
        cout << "The minimum number of moves is " << res << ".\n\n";

        t++;
    }

    return 0;
}