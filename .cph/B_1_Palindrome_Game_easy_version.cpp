#include <bits/stdc++.h>
using namespace std;

#define int long long

bool p(string s) {
    string t = s;
    reverse(s.begin(), s.end());
    return s == t;
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int a = count(s.begin(), s.end(), '1');

    if (a == n) {
        cout << "DRAW" << endl;
        return;
    }

    int zeroes = n - a;

    if ((zeroes % 2 == 0) && p(s)) {
        if (zeroes % 4 == 2) {
            cout << "BOB" << endl;
        } else {
            cout << "DRAW" << endl;
        }
        return;
    }

    if ((zeroes % 2 == 1) && p(s)) {
        if (zeroes % 4 == 1) {
            cout << "BOB" << endl;
        } else {
            cout << "ALICE" << endl;
        }
        return;
    }

    cout << "ALICE" << endl;
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
