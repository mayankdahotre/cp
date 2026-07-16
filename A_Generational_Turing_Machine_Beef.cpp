#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    vector<int> freq(26, 0);

    for (char c : s) {
        freq[c - 'a'] = 1;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] == 0) {
            cout << (char)('a' + i) << endl;
            return;
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
