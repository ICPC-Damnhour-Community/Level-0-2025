#include <iostream>
using namespace std;

long long maxAlternatingSum(int arr[], int start, int n) {
    long long sum = 0, maxSum = 0;
    bool flag = true;

    for (int i = start; i < n; i++) {
        sum += flag ? arr[i] : -arr[i];
        flag = !flag;

        if (sum < 0) sum = 0;
        maxSum = max(maxSum, sum);
    }

    return maxSum;
}
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    int test; cin >> test;
    while (test--) {
        int n; cin >> n;
        int a[n];
        for(int &i : a) cin >> i;


        cout << max(maxAlternatingSum(a,0,n) * 1LL,maxAlternatingSum(a,1,n) * 1LL) << endl;

    }
}