#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    if (n == 1) { // Single element case
        cout << "YES\n";
        return;
    }

    vector<char> cs;
    for (int i = 0; i < n - 1; i++) {
        if (v[i + 1] < v[i]) {
            if (cs.empty() || cs.back() != 'D') {
                cs.push_back('D');
            }
        }
        if (v[i + 1] > v[i]) {
            if (cs.empty() || cs.back() != 'U') {
                cs.push_back('U');
            }
        }
    }

    if (cs == vector<char>{'D', 'U'} || cs == vector<char>{'U'}) {
        cout << "YES"<<endl;
    } else {
        cout << "NO"<<endl;
    }
    return;
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
