// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     // debugv(v);

//     sort(v.begin(), v.end());
//     v.erase(unique(v.begin(), v.end()), v.end());

//     debugv(v);

//     int m = v.size();

//     // vector<int> d(n-1);
//     // for(int i=0; i<n-1; i++) d[i]=v[i+1]-v[i];

//     int ans=1;

//     for(int i=0; i<m-1; i++){
//         int j=0;
//         while(v[i+j]-v[i]<=n-1 && j<m){
//             debug(v[i]);
//             debug(v[i+j]);
//             j++;
//         }
//         ans=max(ans, j);
//         debug(j);
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
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    int m = v.size();
    int ans=1;

    int r=0;
    for (int l=0; l<m; l++) {
        while (r<m && v[r]-v[l]<=n-1) r++;
        ans = max(ans, r-l);
    }

    cout << ans << endl;
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