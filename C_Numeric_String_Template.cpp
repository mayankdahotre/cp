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
    for(int i = 0; i < n; i++) cin >> v[i];

    int q;
    cin >> q;

    while(q--) {
        string s;
        cin >> s;

        if(s.length() != n) {
            no;
            continue;
        }

        bool ok = true;

        map<char, int> mp1;
        for(int i = 0; i < n; i++) {
            if(mp1.find(s[i]) == mp1.end()) {
                mp1[s[i]] = v[i];
            } else if(mp1[s[i]] != v[i]) {
                ok = false;
                break;
            }
        }

        if(!ok) {
            no;
            continue;
        }

        map<int, char> mp2;
        for(int i = 0; i < n; i++) {
            if(mp2.find(v[i]) == mp2.end()) {
                mp2[v[i]] = s[i];
            } else if(mp2[v[i]] != s[i]) {
                ok = false;
                break;
            }
        }

        if(!ok) no;
        else yes;
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