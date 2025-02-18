#include <iostream>
#include <string>
using namespace std;


int main() {
    int n,m;
    cin>>n>>m;
    if(m%n!=0){
        cout<<-1;
        return 0;
    }
    int factor =m/n,moves=0;
    while(factor%2==0){
        factor/=2;
        moves++;
    }
    while(factor%3==0){
        factor/=3;
        moves++;
    }
    if(factor==1)
        cout<<moves;
    else
        cout<<-1;

    return 0;
}