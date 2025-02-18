#include <iostream>
#include <string>
using namespace std;

string decodeMessage( string s, int k) {
    string base;
    int minLen = 0, maxLen = 0;

    for (size_t i = 0; i < s.size(); ++i) {
        if (s[i] == '?') {         //hw?ap*yn?eww*ye*ar
            minLen--;
        } else if (s[i] == '*') {
            minLen--;
            maxLen += 200;
        } else {
            base += s[i];
            minLen++;
            maxLen++;
        }
    }

    if (k < minLen || k > maxLen) return "Impossible";

    int q = base.size() - k;
    int d = abs(q);
    if (d == 0)
        return base;
    string result = "";
    if (base.size() > k) { //--
        for (int i = 0; i < s.size(); i++) {
            if (d > 0 && (s[i + 1] == '?' || s[i + 1] == '*')) {
                i++;
                d--;
            } else if (isalpha(s[i])) {
                result += s[i];
            }
        }
    } else { //++
        int t = 1;
        for (int i = 0; i < s.size(); i++) {
            if (t == 1 && s[i + 1] == '*') {
                result.append(d+1, s[i]);
                t--;
            } else if(isalpha(s[i])) {
                result += s[i];
            }
        }
    }
    return result;
}

int main() {
    string s;
    int k;
    cin >> s >> k;
    cout << decodeMessage(s, k) << endl;
    return 0;
}