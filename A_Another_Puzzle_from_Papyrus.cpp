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
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    int c1 = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < b[i]) {
            c1 = -1;
            break;
        }
        c1 += a[i] - b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int c2 = c;
    for (int i = 0; i < n; i++) {
        if (a[i] < b[i]) {
            c2 = -1;
            break;
        }
        c2 += a[i] - b[i];
    }

    if (c1 == -1 && c2 == -1) cout << -1 << endl;
    else if (c1 == -1) cout << c2 << endl;
    else if (c2 == -1) cout << c1 << endl;
    else cout << min(c1, c2) << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}