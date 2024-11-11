#include <iostream>
using namespace std;

int main() {

 int n;
 cin >> n;
 bool m = n%2;
 if( n == 2){
     cout<<"NO"<<endl;
 }
 else if(m == 0){
     cout<<"YES"<<endl;
 }
 else{
     cout<<"NO"<<endl;
 }
     return 0;
}