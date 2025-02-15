#include <iostream>
#include <cstring>
using namespace std;
void shift(int n,int x[]){
    int tmp = x[0];
    for(int i = 0; i < n; i++) x[i] = x[i + 1];
    x[n] = tmp;
}
int main() {

    int test; cin >> test;
    while (test--) {
        int n;
        cin >> n;
        int a[n];
        int ans[n];
        memset(ans,0,sizeof ans); // set the array to 0
        for(int &i : a) cin >> i;
        for(int i = n - 1; i >= 0; i--){
            while(a[i] != (i + 1))
                shift(i,a), ans[i]++;
        }
        for(auto i : ans) cout << i << " ";
        cout << endl;
    }
}