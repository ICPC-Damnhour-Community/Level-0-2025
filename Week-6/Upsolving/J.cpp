#include <iostream> 
#include <algorithm>

using namespace std;

int main() {
    int n, k; cin >> n >> k;
    int res = 0;

    char k_char = k + '0'; // 6 + 48 = 54 -> '6'
    while(n--){
        string s; cin >> s;
        bool f = 1;
        for(char i = '0'; i <= k_char; i++){
            if(find(s.begin(), s.end(), i) == s.end()){
                f = 0;
            }
        }
        res += f;
    }
    cout << res << endl;






    return 0;
}