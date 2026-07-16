// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n;
//     cin>>n;

//     vector<vector<int>> v(n, vector<int>(n));

//     for(int i=0; i<n; i++) for(int j=0; j<n; j++) cin>>v[i][j];

//     int ans=0;
//     for(int i=0; i<n/2; i++){
//         for(int j=0; j<n/2; j++){
//             int x = v[i][j]+v[j][n-1-i]+v[n-1-i][n-1-j]+v[n-1-j][i];
//             ans+=min(4-x, x);
//         }
//     }

//     if(n%2){
//         int j=n/2;
//         for(int i=0; i<n/2; i++){
//             int x = v[i][j]+v[j][n-1-i]+v[n-1-i][n-1-j]+v[n-1-j][i];
//             ans+=min(4-x, x);
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

void solve() {
    int n;
    cin>>n;

    vector<string> v(n);
    for (int i=0; i<n; i++) cin>>v[i];

    int ans=0;

    for (int i=0; i<n/2; i++) {
        for (int j=0; j<(n+1)/2; j++) {

            int x = 0;
            x += v[i][j]-'0';
            x += v[j][n-1-i]-'0';
            x += v[n-1-i][n-1-j]-'0';
            x += v[n-1-j][i]-'0';

            ans += min(x, 4-x);
        }
    }

    cout<<ans<<endl;
    return;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
        solve();
}