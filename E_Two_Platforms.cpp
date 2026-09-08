// sliding window
// suffix max
// 1d dp (suffix max sum)



// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
// #define yes cout << "YES\n"
// #define no cout << "NO\n"

// void solve() {
//     int n, k;
//     cin>>n>>k;

//     vector<pair<int,int>> p(n);
//     for(int i=0; i<n; i++) cin>>p[i].first>>p[i].second;
    
//     sort(p.begin(), p.end());

//     int d = p.end().first-p.begin().first;

//     if(2*k+1>=d){
//         cout<<n<<endl;
//         return;
//     }
//     else{
//         int ans=0;

//         map<int,int> m;
//         for(int i=0; i<n; i++) m[p[i].first]++;

//         vector<int> suf(n-k);
//         int sum = 0;
//         for(int i=n-1; i>=n-k; i++) if(m.count(i)) sum+=m[i];

//         suf[n-k]=sum;
//         for(int i=n-k; i>=0; i--){
//             sum-=m[i+k];
//             sum+=m[i];
            
//             suf[i]=max(suf[i], sum);
//         }

//         int lsum=0;
//         for(int i=0; i<k; i++) lsum+=m[i];

//         for(int i=0; i<n-2*k; i++){
//             ans=max(ans, lsum+suf[i+k]);
//         }

//         cout<<ans<<endl;
//         return;
//     }
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
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n, k;
    cin >> n >> k;

    vector<pair<int,int>> p(n);

    for(int i = 0; i < n; i++) cin >> p[i].first;
    for(int i = 0; i < n; i++) cin >> p[i].second;

    sort(p.begin(), p.end());

    vector<int> cnt(n), suf(n + 1, 0);

    int r = 0;
    for(int l = 0; l < n; l++) {
        while(r < n && p[r].first <= p[l].first + k) r++;
        cnt[l] = r - l;
    }

    for(int i = n - 1; i >= 0; i--) suf[i] = max(suf[i + 1], cnt[i]);

    int ans = 0;

    r = 0;
    for(int l = 0; l < n; l++) {
        while(r < n && p[r].first <= p[l].first + k) r++;
        ans = max(ans, cnt[l] + suf[r]);
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

    while(T--) {
        solve();
    }

    return 0;
}