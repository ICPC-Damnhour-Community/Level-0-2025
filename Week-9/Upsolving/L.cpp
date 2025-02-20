#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#include <set>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
 
int main()
{
    int t; cin>>t; while(t--)
    {
 int a[3];
 for(int i = 0 ; i < 3 ;i++)
    cin >> a[i];
 for(int i = 0; i < 5 ; i++)
 {
   sort ( a , a + 3 );
   a[0]++;
 }
 cout << a[0] * a[1] * a[2] << "\n";
    }
    return 0;
}