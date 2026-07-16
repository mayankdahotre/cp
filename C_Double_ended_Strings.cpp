#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    string a, b;
    cin >> a >> b;

    int n = a.length();
    int m = b.length();

    map<string,int> mp;

    // store substrings of a
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= n - i; j++){
            mp[a.substr(j,i)]++;
        }
    }

    int len = 0;

    // check substrings of b
    for(int i = 1; i <= m; i++){
        for(int j = 0; j <= m - i; j++){
            if(mp.count(b.substr(j,i))){
                len = max(len, i);
            }
        }
    }

    int ans = n + m - 2 * len;
    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) solve();
}