#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    vector<vector<int>> v(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int sum = i + j;
            int rt = sqrt(sum);
            if (rt * rt == sum) v[i].push_back(j);
        }
    }

    vector<int> dp(n, -1), vis(n, 0);

    for (int i = 0; i < n; i++) {
        if (v[i].size() == 1) {
            dp[i] = v[i][0];
            vis[v[i][0]] = 1;
        }
    }
    
    bool b = false;
    int num = 0;
    while(true){
        for (int i = 0; i < n; i++) {
            if (dp[i] == -1) {
                for (int j : v[i]) {
                    if (!vis[j]) {
                        dp[i] = j;
                        vis[j] = 1;
                        break;
                    }
                    
                }
                b = true;
                num++;
            }
        }
        if(!b && num>2) break;
    }

    for (int x : dp) cout << x << " ";
    cout << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
