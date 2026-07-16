// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     sort(v.begin(), v.end());

//     // int ans = *max_element(v.begin(), v.end()) - *min_element(v.begin(), v.end());
//     int ans = 0;

//     // for(int i=sqrt(n); i>0; i--){
//     //     if(i==sqrt(n)){
//     //         if(i*i==n){
//     //             int sum=0;
//     //             for(int j=0; j<i; j++) sum+=v[n-1-j]-v[j];
//     //             ans=max(ans, sum);
//     //         }
//     //     }
        
//     //     if(n%i==0){
//     //         int sum=0;
//     //         for(int j=0; j<i; j++) sum+=v[n-1-j]-v[j];
//     //         ans=max(ans, sum);

//     //         // sum=0;
//     //         // for(int j=0; j<n/i; j++) sum+=v[n-1-j]-v[j];
//     //         // ans=max(ans, sum);
//     //     }
//     // }

//     for(int i=1; i*i<=n; i++){
//         if(n%i==0){
//             int sum=0;
//             for(int j=0; j<i; j++) sum+=v[n-1-j]-v[j];
//             ans=max(ans, sum);

//             sum=0;
//             for(int j=0; j<n/i; j++) sum+=v[n-1-j]-v[j];
//             ans=max(ans, sum);
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


// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin >> n;

//     vector<int> a(n), pref(n+1, 0);
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//         pref[i+1] = pref[i] + a[i];
//     }

//     int ans = 0;

//     for (int k = 1; k <= n; k++) {
//         if (n % k != 0) continue;

//         int mn = LLONG_MAX, mx = LLONG_MIN;

//         for (int i = 0; i < n; i += k) {
//             int sum = pref[i+k] - pref[i];
//             mn = min(mn, sum);
//             mx = max(mx, sum);
//         }

//         ans = max(ans, mx - mn);
//     }

//     cout << ans << '\n';
// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int T;
//     cin >> T;
//     while (T--) solve();
// }



#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    vector<int> presum(n+1,0);
    // presum[0] = v[0];
    for(int i=0; i<n; i++) presum[i+1]=presum[i]+v[i];

    int ans = 0;
    for(int i=1; i<=n; i++){
        if(n%i) continue;

        int mn = LLONG_MAX, mx = LLONG_MIN;
        for(int j=0; j<n; j+=i){
            int sum = presum[j+i]-presum[j];
            mn = min(mn, sum);
            mx = max(mx, sum);
        }

        ans = max(ans, mx-mn);
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