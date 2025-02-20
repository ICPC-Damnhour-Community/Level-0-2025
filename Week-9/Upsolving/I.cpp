#include <iostream>
#include <string>
using namespace std;

int main() {
   int t,n;
   cin>>t;
   string s;
   string ugly1="pie";
   string ugly2="map";

   while(t--){
       cin>>n;
       cin>>s;
       int cnt=0;
       string last3digit="";
       for(int i=0;i<n;i++) {
           if ((s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e') ||
               (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p')) {
               cnt++;
               i+=2;
           }
       }
       cout<<cnt<<endl;
   }
    return 0;
}