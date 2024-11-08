#include <iostream>
using namespace std;

int main() {
int n, m, x;
cin >> n >> m;
x = n - (n % m);
cout << x << endl;
}
