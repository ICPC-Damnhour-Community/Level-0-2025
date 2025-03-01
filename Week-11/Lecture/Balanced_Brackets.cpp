
/*Mohamed_Awad*/
#include <bits/stdc++.h>
#define test int tttt=0;cin>>tttt;while(tttt--)
#define Done return 0;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define clr(ss, d) memset(ss, d, sizeof(ss))
#define endl "\n"
#define ll long long
// #define int long long
using namespace std;
int fpower(int base, int p){if(!p) return 1;int ans = fpower(base,p / 2);return (p&1? base * ans * ans : ans * ans);}
int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, -1, 1, -1, 1, -1, 1};
int dcx[] = {2, 2, 1, 1, -2, -2, -1, -1};
int dcy[] = {1, -1, 2, -2, 1, -1, 2, -2};
const int N = 1e5 + 5,M = 102,  mod = 1e9 + 7, OO = 0x3f3f3f3f;

vector<vector<int>>adj, comps;
vector<int> vis, tmp,isPrime;
void ip(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

}

//=============================================================================================================================//

int32_t main() {

    fast
   
    int t; cin >> t;
    while (t--) {
        string s;
        cin >> s;
        stack<char>st;
        bool flag = true;
        for (int i : s) {
            if (i == '(' or i =='{' or i == '[') {
                st.push(i);
            }
            else {
                if (!st.empty()) {
                    if (i == ')') {
                        if (st.top() != '(') {
                            flag = false;
                            break;
                        }

                    }
                    else if (i == '}') {
                        if (st.top() != '{') {
                            flag = false;
                            break;
                        }
                    }
                    else {
                        if (st.top() != '[') {
                            flag = false;
                            break;
                        }
                    }

                    st.pop();
                }
                else {
                    flag = false;
                    break;
                }
            }
        }

        if (!st.empty()) flag = false;
        cout << (flag?"YES" : "NO") << endl;
    }

}
