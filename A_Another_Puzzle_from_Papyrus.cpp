// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n,c;
//     cin>>n>>c;

//     vector<int> a(n), b(n);
//     for(int i=0; i<n; i++) cin>>a[i];
//     for(int i=0; i<n; i++) cin>>b[i];

//     int ans=0;

//     map<int,int> mp;
//     for(int i=0; i<n; i++){
//         mp[a[i]]=b[i];
//     }

//     sort(a.begin(), a.end());
//     sort(b.begin(), b.end());

//     bool add=false;
//     for(int i=0; i<n; i++){
//         if(b[i]!=mp[a[i]]) add=true;
//     }

//     for(int i=0; i<n; i++){
//         if(b[i]>a[i]){
//             cout<<-1<<endl;
//             return;
//         }
//         else{
//             ans+=a[i]-b[i];
//         }
//     }

//     if(add) ans+=c;

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
    int n, c;
    cin >> n >> c;

    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    vector<int> sa = a, sb = b;
    sort(sa.begin(), sa.end());
    sort(sb.begin(), sb.end());

    int ans = 0;
    bool flg = false;

    for(int i = 0; i < n; i++) {
        if(sb[i] > sa[i]) {
            cout << -1 << "\n";
            return;
        }
        ans += sa[i] - sb[i];
    }

    multiset<pair<int, int>> s1, s2;
    for(int i = 0; i < n; i++) {
        s1.insert({a[i], b[i]});
        s2.insert({sa[i], sb[i]});
    }

    if(s1 != s2) flg = true;
    if(flg) ans += c;

    cout << ans << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}