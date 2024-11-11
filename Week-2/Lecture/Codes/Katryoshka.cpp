#include <iostream>
# include <algorithm>
using namespace std;
int main() {

long long a , b , c;
cin >> a >> b >> c;
long long res = 0;
long long mn = min(c , min(a,b));
res += mn ;
a -= mn;  // a = a - mn
b -= mn ;
c -= mn;
if( b == 0){
    res += min(a/2 , c);
}
cout << res;
     return 0;
}