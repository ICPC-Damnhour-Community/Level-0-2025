#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int test; cin >> test;
    while (test--) {
        int n,p,q;
        cin >> n >> p >> q;
        int a[n];
        for(int &i : a) cin >> i;
        long long sp = 0,sq = 0;
        sort(a,a+n);
        int i;
        for(i = 0; i < n and i < p; i++)
        {
            if(a[n - i - 1] > 0) sp += a[n - i - 1];
        }
         for(i = 0; i < n and i < q; i++)
        {
            if(a[i] < 0)
            sq += a[i];
        }

         cout << sp - sq << endl;



    }
}