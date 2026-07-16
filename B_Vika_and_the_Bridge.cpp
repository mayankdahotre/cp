// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n,k;
//     cin>>n>>k;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     map<int, vector<int>> mp;
//     for(int i=0; i<n; i++){
//         if(!mp.count(v[i])) mp[v[i]].push_back(i);
//         else{
//             int l = mp[v[i]].size();
//             mp[v[i]].push_back(mp[v[i]][l-1]-i-1);
//         }
//     }
//     for(int i=1; i<=k; i++){
//         int l = mp[v[i]].size();
//         mp[v[i]].push_back(n-mp[v[i]][l-1]-1);
//     }

//     for(int i=1; i<=k; i++) sort(mp[v[i]].begin(), mp[v[i]].end(), greater<int>());

//     int mx = n;
//     for(int i=1; i<=k; i++){
//         int mxe = max(mp[v[i]][0]/2,mp[v[i]][1]);
//         mx = min(mxe, mx);
//     }

//     cout<<mx<<endl;
//     return;
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




// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n,k;
//     cin>>n>>k;

//     vector<int> v(n);
//     for(int i=0;i<n;i++) cin>>v[i];

//     map<int, vector<int>> pos;

//     for(int i=0;i<n;i++){
//         pos[v[i]].push_back(i);
//     }

//     int ans = n;

//     for(int color=1;color<=k;color++){
//         vector<int> gaps;

//         if(pos[color].empty()){
//             gaps.push_back(n);
//         } else {
//             // start gap
//             gaps.push_back(pos[color][0]);

//             // middle gaps
//             for(int i=1;i<(int)pos[color].size();i++){
//                 gaps.push_back(pos[color][i] - pos[color][i-1] - 1);
//             }

//             // end gap
//             gaps.push_back(n - pos[color].back() - 1);
//         }

//         sort(gaps.begin(), gaps.end(), greater<int>());

//         int mx1 = gaps[0];
//         int mx2 = (gaps.size()>1 ? gaps[1] : 0);

//         int cur = max(mx1/2, mx2);
//         ans = min(ans, cur);
//     }

//     cout<<ans<<endl;
// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int T;
//     cin>>T;
//     while(T--) solve();

//     return 0;
// }





#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, k;
    cin>>n>>k;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    vector<vector<int>> pos(k);
    for(int i=0; i<n; i++) pos[v[i]].push_back(i);

    int ans = n;

    for(int c=0; c<=k; c++){
        vector<int> g;

        if(pos.empty()) g.push_back(n);
        else{
            g.push_back(pos[c][0]);
            for(int j=1; j<pos[c].size()-1; j++){
                g.push_back(pos[c][j]-pos[c][j-1]-1);
            }
            g.push_back(n-pos[c][pos[c].size()-1]-1);

            int mx1 = g[0];
            int mx2 = 0;
            if(g.size()>1) mx2 = g[1];

            int mx = max(mx1/2, mx2);
            ans = min(ans, mx);
        }
    }

    cout<<ans<<endl;
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