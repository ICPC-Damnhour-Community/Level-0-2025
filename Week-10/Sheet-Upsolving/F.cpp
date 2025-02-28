#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    double sum = 0.0;
    vector<pair<int, int>> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i].first >> vec[i].second;
        if (i >= 1) {
            int dx = vec[i].first - vec[i - 1].first;
            int dy = vec[i].second - vec[i - 1].second;
            sum += sqrt(dx * dx + dy * dy);
        }
    }

    sum /= 50;
    sum *= k;
    printf("%.9f\n", sum);
    return 0;
}