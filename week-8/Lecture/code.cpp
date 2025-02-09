#include <bits/stdc++.h>
using namespace std;

void ip() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

double Average( int a , int b){   // O(1)

    double a = (a + b) / 2.0;
    return a;
}

bool isAlphapitic( char c){       // O(1)

    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}



int f(int n , int x){               // O(n / x)   O(n)
    int cnt = 0 ;
    for(int i = 1 ; i<= n ; i+=x){
        cnt+=i;
    }
    return cnt;
}



int f2(int z){           //O(log(z))
    int cnt = 0 ;
    while( z > 1){
        cnt++;
        z /= 2;
    }
    return cnt;
}




int main() {
    ip();
    ios::sync_with_stdio(false);
    cin.tie(nullptr);





   int n;
   cin >> n;
   for( int i = 0; i < n *2 ; i++ ) {   // O(1e5)   O(n * 2)
        cout <<"Omnia";
   }


   int a , b ;
   cin >> a >> b;      

   cout << a + b ;    //O(1)

    // n  = 3 
    for(int i = 0; i < n; i++ ) {  
        for( int j = 0 ; j < n; j++ ) {    //O(N^2)
            cout << "Omnia" ;
        }
    }


int m;
cin >> m;
  for(int i = 0; i < n; i++ ) {  
        for( int j = 0 ; j < m; j++ ) {    //O(N * M) 
            cout << "Omnia" ;
        }
    }























for(int i = 0 ; i < n ; i++){       // O(n)
    cout <<"Omnia";
}

for(int i = 0 ; i < m ; i++){
    cout <<"Omnia";
}




if(n % 2 == 0){
    for(int i = 0 ; i < n ; i++){      // O(n)
    cout <<"Omnia";
}
}
else{
    for(int i = 0 ; i < m ; i++){
    cout <<"Omnia";
}
}










}
