#include <iostream>
#include <string>
using namespace std;

int fip(int n,int a,int b){
    if(n%3==0) return a;
    if(n%3==1) return b;
    else return a^b;
}
int main() {
    int t,n,a,b;
    cin>>t;
    while (t--) {
        cin >> a>>b>>n;
        cout << fip(n,a,b)<<endl;
    }
    return 0;
}