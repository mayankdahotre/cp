// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> a(n), b(n);
//     for(int i=0; i<n; i++) cin>>a[i];
//     for(int i=0; i<n; i++) cin>>b[i];

//     int l = *min_element(a.begin(), a.end());
//     int r = *max_element(a.begin(), a.end());

//     int maxn = 0;
//     int ans=-1;
//     for(int i=0; i<n; i++){
//         int k=0;
//         vector<int> b2 = b;
//         for(int j=0; j<n; j++){
//             if(!b2[k]) k++;
//             if(a[j]>=a[i]) b2[k]--;
//         }
//         if(maxn <= a[i]*(k)){
//             maxn = a[i]*(k);
//             ans = a[i];
//         }
//     }

//     cout<<ans<<endl;
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
    cin >> n;

    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    sort(a.begin(), a.end());

    // prefix sum of b
    vector<int> pref(n);
    pref[0] = b[0];
    for(int i = 1; i < n; i++){
        pref[i] = pref[i-1] + b[i];
    }

    int ans = 0;

    for(int i = 0; i < n; i++){
        int x = a[i];

        // number of swords ≥ x
        int cnt = n - i;

        // find max k such that pref[k] ≤ cnt
        int k = upper_bound(pref.begin(), pref.end(), cnt) - pref.begin();

        ans = max(ans, x * k);
    }

    cout << ans << "\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}