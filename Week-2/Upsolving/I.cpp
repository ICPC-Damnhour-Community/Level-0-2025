#include <bits/stdc++.h>
 
using namespace std;


int main(){
    int n, a, b; cin >> n >> a >> b;
    cout << (n * a < b ? n * a : b) << endl;
    return 0;
}
