#include <bits/stdc++.h>

using namespace std;

int main() {
    int t,n,k;
    cin>>t;
    while(t--) {
        cin >> n >> k;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }
        sort(vec.begin(), vec.end());
        int left = 0, right = n - 1, cnt = 0;
        while (left < right) {
            int sum = vec[left] + vec[right];
            if (sum == k) {
                cnt++;
                left++;
                right--;
            } else if (k > sum)
                left++;
            else
                right--;
        }
        cout<<cnt<<endl;
    }
    return 0;
}