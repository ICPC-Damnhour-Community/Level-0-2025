#include <iostream>
#include<algorithm>
#include<cmath>
using namespace std;
void ip()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int main(){
    ip();
// print 1 for 3 times
    for(int i = 0; i < 3; i++){
        cout<< 1 << " ";
        
    }

    
// print numbers from 1 to 3 
 for(int i = 1; i <= 3; i++){
        cout<< i <<" ";
    }
    cout<<endl;


// print numbers from 0 to 2 
 for(int i = 0; i < 3; i++){
        cout<< i <<" ";
    }
    cout<<endl;


// what happen if we put i++; after print
    for(int i = 0; i < 3;){
        cout<<i <<" ";
        i++;
    }
    cout<<endl;


// what happen if we put i++; before print
    for(int i =0; i < 3;){
         i++;
        cout<< i <<" ";
    }
    cout<<endl;


// while loop
    cout<<endl;
    int n=0;
    while(n < 3){
        cout<<n<<" ";
        n++;
    }

    cout<<endl;

    int x = 0;
    for(;x<3;){
        cout<< x <<" ";
        x++;
    }

    cout<<"*********************************" <<endl;

  int i=0;
   do{
   cout<< "Omnia"<<endl;
   i++;
   }
   while( i > 3);
 
  

  cout<<"******************"<<endl;

  int x = 0;
  while(x>3){
    cout<<"Ahmed"<<endl;
    x++;
  }


for( int i = 1 ; i <= 10 ;i++){
    cout<< i <<endl;
    if(i == 5){
        break;
    }
}


for( int i = 1 ; i <= 10 ;i++){
    if(i == 5){
        break;
        cout<< i <<endl;
        
    }
}

for( int i = 1 ; i <= 10 ;i++){ 
    if(i == 5){
        continue;
    }
     cout<< i <<endl;
}

for(int i =2;i<=10 ; i+=2){
    cout<< i <<" ";
}

for(int i = 0; i< 4 ;i++){
    for(int j =0; j < 4 ; j++){
        cout<<" * ";
    }
    cout<<endl;
}
int i;
for( i =1; i <= 5; i++){
    for(int j = 1; j <= 5; j++){
        cout<< i << " * "  << j  <<" = "<< i * j <<endl;
    }
    cout<<endl;

}
cout<< i;


for(int i = 1; i <= 3; i++){

    cout<<"i = "<< i <<endl;

    for(int j =1; j <= 3; j++){

        

        if(j == 1){
            cout<<"Break when j = "<<j <<endl;
            continue;
        }
        cout<<"j = " <<j <<endl;
    }
    cout<<endl;

}
int flag = 1;
for(int i=0; i< 3; i++){
    for(int j = 0; j < 3; j++){
        int n;
        cin >> n;
        if(n > 20){
            flag =0;
            break;
        }
        cout<< n <<" ";
    }
    if(flag == 0){
        break;
    }
}

cout<<"Omnia";

int n;
cin >> n;
for(int i =1; i <= n; i++){
    for(int j= 1; j <= i ;j++){
        cout<<j<<" ";
    }
    cout<<endl;
}

    int a , b , c , d ;
    a = b = c = d = 0 ;
    while (a <= 1){
        cout << a << endl ;
        while (b <= 2){
            cout << b << " "<< endl; 
            b += 1 ; //b=1
            }while (c <= 3) {
                cout << c << " " << endl ;
                c += 1 ; // c=1
                }while (d <= 4) {
                cout << d << " " << endl ;
                d += 1 ; // d =1
                }
        }
//Test Cases
int n; 
cin >>n;
while(n--){
int a , b;
cin >> a >> b;
}
}


