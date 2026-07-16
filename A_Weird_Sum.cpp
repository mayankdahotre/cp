// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n,m;
//     cin>>n>>m;

//     vector<vector<int>> v(n, vector<int>(m));
//     for(int i=0; i<n; i++) for(int j=0; j<m; j++) cin>>v[i][j];

//     map<int,vector<pair<int,int>>> mp;
//     for(int i=0; i<n; i++) for(int j=0; j<m; j++) mp[v[i][j]].push_back({i,j});

//     int ans=0;
//     for(auto p: mp){
//         vector<pair<int,int>> vp = p.second;
//         int sz = vp.size();
//         for(int i=0; i<sz; i++){
//             for(int j=i+1; j<sz; j++){
//                 ans+=abs(vp[i].first-vp[j].first)+abs(vp[i].second-vp[j].second);
//             }
//         }
//     }

//     cout<<ans<<endl;
//     return;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     solve();

//     return 0;
// }





#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n,m;
    cin>>n>>m;

    vector<vector<int>> v(n, vector<int>(m));
    for(int i=0; i<n; i++) for(int j=0; j<m; j++) cin>>v[i][j];

    map<int,vector<pair<int,int>>> mp;
    for(int i=0; i<n; i++) for(int j=0; j<m; j++) mp[v[i][j]].push_back({i,j});

    int ans=0;
    for(auto p : mp){
        vector<int> r, c;

        for(auto x : p.second){
            r.push_back(x.first);
            c.push_back(x.second);
        }

        sort(r.begin(), r.end());
        sort(c.begin(), c.end());

        int pref = 0;
        for(int i=0; i<r.size(); i++){
            ans += r[i]*i - pref;
            pref += r[i];
        }

        pref = 0;
        for(int i=0; i<c.size(); i++){
            ans += c[i]*i - pref;
            pref += c[i];
        }
    }

    cout<<ans<<endl;
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}