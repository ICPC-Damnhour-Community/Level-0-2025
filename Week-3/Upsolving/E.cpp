#include <iostream>

using namespace std;

int main() {
    int n ; // number of problems
    int rooms = 0 ; //number of answers
    cin >> n ;
    for(int i = 0 ; i < n ; i++){
        int x,y;
        cin >> x >> y ;
        if(x<=(y-2)){
           rooms++;
        }
    }
    cout << rooms ;
   return 0 ; 
}
