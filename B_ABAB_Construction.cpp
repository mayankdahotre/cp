#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    // condition 1
    if(n % 2 && s[0] == 'b') {
        cout << "NO\n";
        return;
    }

    if(n % 2) {
        // check (0,1), (2,3), ...
        for(int i = 1; i < n - 1; i += 2) {
            if(s[i] == s[i+1]) {
                cout << "NO\n";
                return;
            }
        }
    } else {
        // check (1,2), (3,4), ...
        for(int i = 0; i < n - 1; i += 2) {
            if(s[i] == s[i+1]) {
                cout << "NO\n";
                return;
            }
        }
    }

    cout << "YES\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--) solve();
}