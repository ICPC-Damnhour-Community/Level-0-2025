#include <iostream>
#include <string>
using namespace std;

int fip(int n){
    if(n<=1)
        return n;
    return fip(n-1)+fip(n-2);
}
int main() {
    int n;
    cin>>n;
    cout<<fip(n);

    return 0;
}