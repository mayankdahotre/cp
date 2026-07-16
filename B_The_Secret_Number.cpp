#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n;
    cin >> n;

    string s = to_string(n);
    int d = s.length();

    vector<int> ans;

    int x = 10;
    for (int i = 0; i < d; ++i) {
        int y = x + 1;
        if (n % y == 0) {
            ans.push_back(n / y);
        }
        x *= 10;
    }

    sort(ans.begin(),ans.end());

    cout << ans.size() << endl;
    if(ans.size()){
        for (auto i : ans) cout << i << " ";
        cout << endl;
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