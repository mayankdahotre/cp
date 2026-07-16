// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n,k;
//     cin>>n>>k;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     // sort(v.begin(), v.end());

//     map<int,int> mp;
//     for(int i=0; i<n; i++) mp[v[i]]++;

//     int mn = *min_element(v.begin(), v.end());
//     int mx = *max_element(v.begin(), v.end());

//     int ans=0;
//     for(int i=mn; i<=mx-k; i++){
//         int x=0;
//         for(int j=0; j<k; j++){
//             x+=mp[i+j];
//         }

//         ans=max(ans, x);
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
//     int n, k;
//     cin >> n >> k;

//     map<int, int> freq;

//     for (int i = 0; i < n; i++) {
//         int x;
//         cin >> x;
//         freq[x]++;
//     }

//     vector<pair<int, int>> v;
//     for (auto &it : freq)
//         v.push_back(it);

//     int ans = 0;
//     int sum = 0;
//     int l = 0;

//     for (int r = 0; r < (int)v.size(); r++) {

//         // Gap found, start a new window
//         if (r > 0 && v[r].first != v[r - 1].first + 1) {
//             l = r;
//             sum = 0;
//         }

//         sum += v[r].second;

//         // Keep at most k distinct values
//         while (r - l + 1 > k) {
//             sum -= v[l].second;
//             l++;
//         }

//         ans = max(ans, sum);
//     }

//     cout << ans << andl;
// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

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
    int n,k;
    cin>>n>>k;

    map<int,int> f;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        f[x]++;
    }

    vector<pair<int,int>> vp;
    for(auto it: f) vp.push_back(it);

    int l=0;
    int sum=0;
    int ans=0;

    for(int r=0; r<vp.size(); r++){
        if(r>0 && vp[r].first!=vp[r-1].first+1){
            l=r;
            sum=0;
        }

        sum+=vp[r].second;

        while(r-l+1>k){
            sum-=vp[l].second;
            l++;
        }

        ans=max(ans, sum);
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