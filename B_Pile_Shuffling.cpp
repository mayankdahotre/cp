// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> a(n), b(n), c(n), d(n);
//     for(int i=0; i<n; i++) cin>>a[i]>>b[i]>>c[i]>>d[i];

//     int ans=0;

//     for(int i=0; i<n; i++){
//         if(b[i]>d[i]) ans+=a[i]+b[i]-d[i];
//         else ans+=max(0LL, a[i]-c[i]);
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





// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> a(n), b(n), c(n), d(n);
//     for(int i=0; i<n; i++) cin>>a[i]>>b[i]>>c[i]>>d[i];

//     int ans=0;
//     for(int i=0; i<n; i++){
//         // debug(i);
//         // debug(a[i]);
//         // debug(b[i]);
//         // debug(c[i]);
//         // debug(d[i]);

//         if(b[i]>d[i]){
//             if(a[i]>c[i]){
//                 ans+=b[i]-d[i]+a[i];
//             }
//             else{
//                 ans+=c[i]+b[i]-d[i];
//             }
//         }
//         else{
//             if(a[i]>c[i]){
//                 ans+=a[i]-c[i];
//             }
//             else if(a[i]==c[i]){
//                 continue;
//             }
//         }

//         // debug(ans);
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

    vector<int> a(n), b(n), c(n), d(n);
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i] >> c[i] >> d[i];

    int ans = 0;

    for(int i = 0; i < n; i++) {
        if(b[i] > d[i]) {
            ans += a[i] + b[i] - d[i];
        }
        else {
            if(a[i] > c[i]) {
                ans += a[i] - c[i];
            }
        }
    }

    cout << ans << endl;
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