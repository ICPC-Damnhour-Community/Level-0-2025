#include <iostream>
#include <string>
using namespace std;


int main() {
    int n,result=0;
    cin>>n;
    result+=n/5;
    if(n%5!=0)
        result++;
    cout<<result;

    return 0;
}