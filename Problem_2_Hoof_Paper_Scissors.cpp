#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        char c;
        cin >> c;
        if(c == 'H') v[i] = 0;
        if(c == 'P') v[i] = 1;
        if(c == 'S') v[i] = 2;
    }

    vector<vector<int>> pre(n + 1, vector<int>(3, 0));
    vector<vector<int>> suf(n + 1, vector<int>(3, 0));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            pre[i + 1][j] = pre[i][j] + (v[i] == j);
        }
    }

    for(int i = n - 1; i >= 0; i--){
        for(int j = 0; j < 3; j++){
            suf[i][j] = suf[i + 1][j] + (v[i] == j);
        }
    }

    int ans = max({pre[n][0], pre[n][1], pre[n][2]}); 
    
    for(int i = 0; i <= n; i++){
        ans = max(ans, pre[i][0] + suf[i][1]); // Try state 0 then state 1
        ans = max(ans, pre[i][0] + suf[i][2]); // Try state 0 then state 2
        ans = max(ans, pre[i][1] + suf[i][0]); // Try state 1 then state 0
        ans = max(ans, pre[i][1] + suf[i][2]); // Try state 1 then state 2
        ans = max(ans, pre[i][2] + suf[i][0]); // Try state 2 then state 0
        ans = max(ans, pre[i][2] + suf[i][1]); // Try state 2 then state 1
    }

    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}