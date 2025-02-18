#include <iostream>
#include <string>
using namespace std;

int sum(int arr[],int n){
    if(n==0)
        return 0;
    return arr[n-1]+sum(arr,n-1);
}
int main() {
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> n;
        int arr[n];
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }
        cout << "Case " << i+1<<": " << sum(arr, n)<<endl;
    }
    return 0;
}