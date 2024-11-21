#include <bits/stdc++.h>
 
using namespace std;

int main(){
    int a, b; cin >> a >> b;
    if(a + b >= 15 && b >= 8){
        cout << "1\n";
    }else if(a + b >= 10 && b >= 3){
        cout << "2\n";
    }else if(a + b >= 3){
        cout << "3\n";
    }else{
        cout << "4\n";
    }
    return 0;
}
