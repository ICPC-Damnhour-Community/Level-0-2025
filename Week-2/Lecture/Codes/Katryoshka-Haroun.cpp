#include <iostream>
# include <algorithm>
using namespace std;
int main() {

long long a , b , c;
cin >> a >> b >> c;
long long res = 0;
long long mn = min(c , min(a,b));
if(a == 0 or c ==0){
    cout<< 0;
}
else if(b == 0 and a<=1){
    cout<<0;
}
else if(b== 0 and a > 1){
    cout<< min(a/2 , c);
}
else if(a > 0 and b > 0 and c > 0){
   long long res = min(a, min(b,c));
   a -= mn;
   b -= mn;
   c -= mn;
   if(b == 0 and a > 1 and c > 1){
       res += min(a/2 , c);
   }
   cout<< res;
}
     return 0;
}