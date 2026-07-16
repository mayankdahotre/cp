// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n,m;
//     cin>>n>>m;

//     vector<vector<int>> v(m, vector<int>(n,0));
//     for(int i=0; i<n; i++) for(int j=0; j<m; j++) cin>>v[j][i];

//     int ans=0;
//     for(int i=0; i<m; i++) sort(v[i].begin(), v[i].end());

//     // for(int i=0; i<m; i++){
//     //     vector<int> x = v[i];
//     //     debugv(x);
//     // }

//     // debugvv(v);

//     debug(ans);

//     for(int i=0; i<m; i++){
//         int l=0, r=n-1;
//         int k=2*(n-2)+1;
//         // debug(k);
//         while(l<r){
//             // debug(v[i][r]-v[i][l]);
//             ans+=(v[i][r]-v[i][l])*k;
//             l++;
//             r--;
//             k-=4;
//             // debug(ans);
//         }
//     }

//     cout<<ans<<endl;
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



#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n, m;
    cin>>n>>m;

    vector<vector<int>> v(m, vector<int>(n, 0));

    for(int i=0; i<n; i++) for(int j=0; j<m; j++) cin>>v[j][i];

    int ans = 0;

    for(int i=0; i<m; i++){
        sort(v[i].begin(), v[i].end());

        int pref = 0;

        for(int j=0; j<n; j++) {
            ans+=v[i][j]*j-pref;
            pref+=v[i][j];
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

    while(T--) {
        solve();
    }

    return 0;
}
