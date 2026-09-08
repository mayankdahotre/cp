#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cerr << #x << " = " << (x) << endl;
#define debug2(a, b) cerr << #a << "=" << (a) << " | " << #b << "=" << (b) << endl;
#define debug3(a, b, c) cerr << #a << "=" << (a) << " | " << #b << "=" << (b) << " | " << #c << "=" << (c) << endl;
#define debugp(p) cerr << #p << " = {" << (p).first << ", " << (p).second << "}" << endl;
#define debugv(v) { cerr << #v << " = [ "; for(auto &it : v) cerr << it << ' '; cerr << "]" << endl; }
#define debugvp(v) { cerr << #v << " = [ "; for(auto &p : v) cerr << "{" << p.first << "," << p.second << "} "; cerr << "]" << endl; }
#define debugvv(v) { cerr << #v << " = \n"; for(auto &r : v){ cerr << "  [ "; for(auto &x : r) cerr << x << ' '; cerr << "]\n"; } }
#define debugm(m) { cerr << #m << " = {\n"; for(auto &p : m) cerr << "  " << p.first << " -> " << p.second << "\n"; cerr << "}" << endl; }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    int mi = 0;
    for(int i = 0; i < n; i++) if(abs(v[i]) > abs(v[mi])) mi = i;

    vector<pair<int, int>> ans;
    if(v[mi] < 0) {
        for(int i = 0; i < n; i++) {
            if(v[i] > 0) {
                v[i] += v[mi];
                ans.push_back({i + 1, mi + 1});
            }
        }
        
        for(int i = n - 2; i >= 0; i--) {
            ans.push_back({i + 1, i + 2}); 
        }
    }
    else if(v[mi] > 0) {
        for(int i = 0; i < n; i++) {
            if(v[i] < 0) {
                v[i] += v[mi];
                ans.push_back({i + 1, mi + 1});
            }
        }

        for(int i = 1; i < n; i++) {
            ans.push_back({i + 1, i});
        }
    }

    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i].first << " " << ans[i].second << endl;
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