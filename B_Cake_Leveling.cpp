// // #include <bits/stdc++.h>
// // using namespace std;

// // #define int long long
// // #define debug(x) cout << #x << " = " << x << endl;
// // #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// // #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// // int h(int mn, int mx, vector<int> v, int k){
// //     int l=mn, r=mx;

// //     while(l<r){
// //         int m = (l+r)/2;
// //         int up=0, down=0;
// //         for(int i=0; i<=k; i++){
// //             up+=max(0LL, v[i]-m);
// //             down+=max(0LL, m-v[i]);
// //         }

// //         if(up==down) return m;
// //         if(up>down) l=m;
// //         else r=m;
// //     }
// // }

// // void solve() {
// //     int n;
// //     cin>>n;

// //     vector<int> v(n);
// //     for(int i=0; i<n; i++) cin>>v[i];

// //     vector<int> a(n,0);
// //     a[0]=v[0];

// //     vector<int> pmn(n), pmx(n);
// //     pmn[0]=pmx[0]=v[0];
// //     for(int i=1; i<n; i++) pmx[i]=max(pmx[i-1], v[i]);
// //     for(int i=1; i<n; i++) pmn[i]=min(pmn[i-1], v[i]);

// //     for(int i=1; i<n; i++){
// //         a[i]=h(pmn[i], pmx[i], v, i);
// //     }

// //     for(int i=0; i<n; i++) cout<<a[i]<<" ";
// //     cout<<endl;

// //     return;
// // }

// // int32_t main() {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     cout.tie(NULL);

// //     int T;
// //     cin >> T;

// //     while (T--) {
// //         solve();
// //     }

// //     return 0;
// // }

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// int h(int mn, int mx, vector<int> v, int k){
//     int l=mn, r=mx;

//     while(l<r){
//         int m = (l+r)/2;
//         int up=0, down=0;
//         for(int i=0; i<=k; i++){
//             up+=max(0LL, v[i]-m);
//             down+=max(0LL, m-v[i]);
//         }

//         if(up==down) return m;
//         if(up>down) l=m+1;
//         else r=m;
//     }
//     return r; // fix: was l, must return r (lower median for even-sized sets)
// }

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    vector<int> pmn(n);
    pmn[0]=v[0];
    for(int i=1; i<n; i++) pmn[i]=min(pmn[i-1], v[i]);

    vector<int> ans(n,0);
    ans[0]=v[0];

    vector<int> psum(n,0);
    psum[0]=v[0];
    for(int i=1; i<n; i++) psum[i]+=psum[i-1]+v[i];

    for(int i=0; i<n; i++){
        int sum = psum[i]-(i+1)*pmn[i];
        ans[i]=pmn[i]+(sum/(i+1));
        ans[i]=min(ans[i], pmn[i]);
    }

    for(int i=0; i<n; i++) cout<<ans[i]<<" ";
    cout<<endl;

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

//     int ans = LLONG_MAX;
//     long long sum = 0;

//     for(int i=0; i<n; i++){
//         sum += v[i];
//         ans = min(ans, sum/(i+1)); 
//         cout << ans << " ";
//     }
//     cout << endl;

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