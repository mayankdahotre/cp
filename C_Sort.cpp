// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n,q;
//     cin>>n>>q;

//     string a,b;
//     cin>>a>>b;

//     vector<pair<int,int>> v(q);
//     for(int i=0; i<q; i++) cin>>v[i].first>>v[i].second;

//     for(int i=0; i<q; i++){
//         int l=v[i].first;
//         int r=v[i].second;

//         l--;
//         r--;

//         map<int,int> mp;
//         for(int j=l; j<=r; j++){
//             mp[a[j]]++;
//             mp[b[j]]--;
//         }

//         int ans=0;
//         for(auto p: mp){
//             if(p.second) ans++;
//         }

//         ans/=2;

//         cout<<ans<<endl;
//     }
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     int T;
//     cin >> T;

//     while (T--) {
//         solve();
//     }

//     return 0;
// }





#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n, q;
    cin >> n >> q;

    string a, b;
    cin >> a >> b;

    vector<vector<int>> prea(n + 1, vector<int>(26, 0));
    vector<vector<int>> preb(n + 1, vector<int>(26, 0));

    for (int i = 1; i <= n; i++) {
        prea[i] = prea[i - 1];
        preb[i] = preb[i - 1];

        prea[i][a[i - 1] - 'a']++;
        preb[i][b[i - 1] - 'a']++;
    }

    while (q--) {
        int l, r;
        cin >> l >> r;

        int diff = 0;

        for (int c = 0; c < 26; c++) {
            int cnta = prea[r][c] - prea[l - 1][c];
            int cntb = preb[r][c] - preb[l - 1][c];

            diff+=abs(cnta-cntb);
        }

        cout<<diff/2<<endl;
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) solve();

    return 0;
}