#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, f;
    cin >> n >> f;
    vector<pair<int, int>> days(n);
    vector<int> increase(n);
    for (int i = 0; i < n; i++) {
        cin >> days[i].first >> days[i].second;
    }
    int sales = 0;
    for (int i = 0; i < n; i++) {
        int k = days[i].first;
        int l = days[i].second;
        int withoutSellout = min(k, l);
        sales += withoutSellout;

        int withSellout = min(2 * k, l);
        increase[i] = withSellout - withoutSellout;
    }

    sort(increase.rbegin(), increase.rend());

    for (int i = 0; i < f; i++) {
        sales += increase[i];
    }

    cout << sales << endl;

    return 0;
}
