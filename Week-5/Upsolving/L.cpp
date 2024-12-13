#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n; cin >> n;
    int p[n], q[n];
    for(int i = 0; i < n; i++) cin >> p[i];
    for(int i = 0; i < n; i++) cin >> q[i];

    int a[n];
    for(int i = 0; i < n; i++){
        a[i] = i + 1;
    } 

    int cnt = 0, A = -1, B = -1;
    do{
        if(equal(a, a + n, p)) A = cnt;
        if(equal(a, a + n, q)) B = cnt;
       cnt++; 
    }while(next_permutation(a, a + n));

    cout << abs(A - B) << endl;

}