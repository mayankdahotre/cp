#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    string s;
    cin >> s;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a, v;
        cin >> a >> v;

        s[a-1] = (char)(v + '0');  

        if (s.find("1100") != string::npos) {  
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
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
