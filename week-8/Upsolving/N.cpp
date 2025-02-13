#include <iostream>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    
    int n;
    cin >> n;
    
    int sum = 0;
    vector<int> a(n), b(n);

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    for (int i = 0; i < n; i++) {
        sum += a[i] * b[i];
    }

    if (sum == 0) 
        cout << "Yes\n";
    else 
        cout << "No\n";

    return 0;
}
