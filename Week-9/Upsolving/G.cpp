#include <iostream>
#include <string>
using namespace std;

int main() {
   long long t,n,f,a,b;
   cin>>t;
   while(t--){
       cin>>n>>f>>a>>b;
       long long m[n];
       for(int i=0;i<n;i++)
           cin>>m[i];
       long long LastTime=0;
       for(int i=0;i<n;i++){
           long long power=min((m[i]-LastTime)*a,b);
           f-=power;
           if(f<=0)
               break;
           LastTime=m[i];
       }
       if(f<=0)
           cout<<"NO"<<endl;
       else
           cout<<"YES"<<endl;
   }
    return 0;
}