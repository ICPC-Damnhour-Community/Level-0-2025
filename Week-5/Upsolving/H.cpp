#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int prob_H(int n , int k , int x){
    int a[n] ;
    int total_time = 0 ;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i] ;
    }
    for(int i = 0 ; i < (n-k) ; i++){
        total_time+= a[i] ;
    }
    total_time += k*x ;

    return total_time ;
}


int main() {
    int N ,  K , X ;
    cin >> N >> K >> X ;
    int result = prob_H(N , K , X) ;
    cout << result << endl ;
    return 0;
}
