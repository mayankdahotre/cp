// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n,x,y;
//     cin>>n>>x>>y;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     sort(v.begin(), v.end());

//     int ans=0;
//     for(int i=0; i<n-1; i++){
//         v[n-1]+=(v[i]/x)*y;
//         if(v[i]%x!=0) v[n-1]++;
//     }

//     cout<<v[n-1]<<endl;
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
//     int n, x, y;
//     cin >> n >> x >> y;

//     vector<int> a(n);
//     for(int i = 0; i < n; i++) cin >> a[i];

//     int total = 0;
//     for(int i = 0; i < n; i++){
//         total += a[i] / x;
//     }

//     int ans = 0;

//     for(int i = 0; i < n; i++){
//         int cur = a[i] + (total - (a[i]/x)) * y;
//         ans = max(ans, cur);
//     }

//     cout << ans << endl;
// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int T;
//     cin >> T;
//     while (T--) solve();

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,x,y;
    cin>>n>>x>>y;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int tot = 0;
    for(int i=0; i<n; i++) tot+=v[i]/x;

    int ans = 0;
    for(int i=0; i<n; i++){
        int cur = v[i] + (tot-v[i]/x)*y;
        ans = max(ans, cur);
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