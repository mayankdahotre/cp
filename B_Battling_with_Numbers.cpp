// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> a(n), b(n);
//     for(int i=0; i<n; i++) cin>>a[i];
//     for(int i=0; i<n; i++) cin>>b[i];

//     int m;
//     cin>>m;

//     vector<int> c(m), d(m);
//     for(int i=0; i<m; i++) cin>>c[i];
//     for(int i=0; i<m; i++) cin>>d[i];

//     map<int,int> x;
//     for(int i=0; i<n; i++) x[a[i]]=b[i];

//     map<int,int> y;
//     for(int i=0; i<m; i++) y[c[i]]=d[i];

//     for(auto p: y){
//         int ci = p.first;
//         int di = p.second;

//         if(x[ci]<di){
//             cout<<0<<endl;
//             return;
//         }
//         else{
//             x[ci]-=di;
//         }
//     }

//     int ans=1;
//     for(auto p: y){
//         int f = p.second;
//         ans*=(f+1);
//     }

//     cout<<ans<<endl;
//     return;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     solve();

//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;

#define int long long
const int MOD = 998244353;
const int MAXA = 2000005; // Placed slightly above the maximum prime value 2*10^6

// Using global arrays to avoid large memory allocations on the stack
int powX[MAXA];
int powY[MAXA];

void solve() {
    int n;
    if (!(cin >> n)) return;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    int m;
    cin >> m;

    vector<int> c(m), d(m);
    for (int i = 0; i < m; i++) cin >> c[i];
    for (int i = 0; i < m; i++) cin >> d[i];

    // Populate the prime exponent frequencies
    for (int i = 0; i < n; i++) powX[a[i]] = b[i];
    for (int i = 0; i < m; i++) powY[c[i]] = d[i];

    int diff_count = 0;

    // Check all possible prime factors up to the max limit
    for (int i = 0; i < MAXA; i++) {
        // Condition 1: If Y has a higher prime power than X, it's impossible
        if (powY[i] > powX[i]) {
            cout << 0 << "\n";
            return;
        }
        // Condition 2: If X has a strictly greater power, it yields 2 independent choices
        if (powX[i] > powY[i]) {
            diff_count++;
        }
    }

    // Calculate (2^diff_count) % 998244353
    int ans = 1;
    for (int i = 0; i < diff_count; i++) {
        ans = (ans * 2) % MOD;
    }

    cout << ans << "\n";
}

int32_t main() {
    // Optimizing standard I/O operations for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}