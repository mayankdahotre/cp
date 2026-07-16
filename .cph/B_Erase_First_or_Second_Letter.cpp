#include <bits/stdc++.h>
using namespace std;

#define int long long

void helper(string s, set<string> &st) {
    int n = s.size();
    if (n == 0) return;

    st.insert(s);

    if (n >= 1)
        helper(s.substr(1), st); 
    if (n >= 2)
        helper(s[0] + s.substr(2), st);
}

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    set<string> st;
    helper(s, st);

    cout << st.size() << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
