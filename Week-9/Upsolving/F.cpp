#include <iostream>
#include <string>
using namespace std;

int main() {
   int t,n;
   string s,f;
   cin>>t;
   while(t--){
       cin>>n>>s>>f;
       int add=0,remove=0;
       for(int i=0;i<n;i++){
           if(s[i]=='0'&&f[i]=='1')
               add++;
           else if(s[i]=='1'&&f[i]=='0')
               remove++;
       }
       cout<<max(remove,add)<<endl;
   }
    return 0;
}