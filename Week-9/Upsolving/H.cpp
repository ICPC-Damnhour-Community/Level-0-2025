#include <iostream>
#include <string>
using namespace std;

int main() {
   int t,n,m,k;
   cin>>t;
   while(t--){
       cin>>n>>m>>k;
       int b[n],c[m],cnt=0;
       for(int i=0;i<n;i++)
           cin>>b[i];
       for(int i=0;i<m;i++)
           cin>>c[i];
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               if(b[i]>=k||c[j]>=k)
                   continue;
               if(b[i]+c[j]<=k)
                   cnt++;
           }
       }
       cout<<cnt<<endl;
   }
    return 0;
}