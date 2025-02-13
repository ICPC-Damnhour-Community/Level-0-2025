#include <iostream>
using namespace std;

#define ll long long
#define fast ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll sum_of_digit(const string &s) {
    ll sum = 0;
    for (char c : s) {
        sum += c - '0';
    }
    return sum;
}

ll digit(string s, ll k) {
    ll x = sum_of_digit(s) * k;
    if (x < 10) return x;
    return digit(to_string(x), 1);
}

int main() {
    fast;
    string s;
    ll k;
    cin >> s >> k;
    cout << digit(s, k) << "\n";
    return 0;
}
