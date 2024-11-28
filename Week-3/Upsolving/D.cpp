#include <iostream>

using namespace std;

int main() {
    int n ; // number of problems
    int sol = 0 ; //number of answers
    cin >> n ;
    for(int i = 0 ; i < n ; i++){
        int x,y,z;
        cin >> x >> y >> z ;
        if(x+y+z>=2){
            sol++;
        }
    }
    cout << sol ;
   return 0 ; 
}
