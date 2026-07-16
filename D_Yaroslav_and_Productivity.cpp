// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n,m;
//     cin>>n>>m;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     vector<int> p(m);
//     for(int i=0; i<m; i++) cin>>p[i];

//     vector<int> suf(n+1,0);
//     for(int i=n-1; i>0; i--) suf[i]+=suf[i+1]+v[i];

//     sort(p.begin(), p.end(), greater<int>());

//     int x=suf[p.back()-1];
//     for(int i=m-1; i>0; i--){
//         int r=p[i]-1;
//         int l=p[i-1]-1;

//         x+=abs(suf[r]-suf[l]);
//     }

//     x+=abs(suf[n]-suf[p[0]]);

//     cout<<x<<endl;
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

// void solve() {
//     int n, m;
//     cin >> n >> m;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin >> v[i];

//     vector<int> p(m);
//     for(int i=0; i<m; i++) cin >> p[i];

//     vector<int> suf(n+1, 0);
//     for(int i=n-1; i>=0; i--) suf[i] = suf[i+1] + v[i]; 

//     sort(p.begin(), p.end(), greater<int>());

//     int x = suf[p.back()];
//     for(int i=m-1; i>0; i--) {
//         int r = p[i]-1;
//         int l = p[i-1];

//         x += abs(suf[r] - suf[l]);
//     }

//     x += abs(suf[0] - suf[p[0]]);

//     cout << x << endl;
//     return;
// }

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    vector<int> p(m);
    for(int i = 0; i < m; i++) cin >> p[i];

    // 0-based suffix sum array
    vector<int> suf(n + 1, 0);
    for(int i = n - 1; i >= 0; i--) {
        suf[i] = suf[i+1] + v[i];
    }

    // Sort p descending. 
    // p.back() is the smallest prefix, p[0] is the largest prefix.
    sort(p.begin(), p.end(), greater<int>());

    // 1. Absolute sum of the FIRST segment (0 to smallest p)
    int x = abs(suf[0] - suf[p.back()]);

    // 2. Absolute sum of INTERMEDIATE segments
    for(int i = m - 1; i > 0; i--) {
        int r = p[i];
        int l = p[i-1];
        x += abs(suf[r] - suf[l]);
    }

    // 3. Raw sum of the REMAINDER of the array (largest p to n)
    // This part cannot be flipped, so we do NOT use abs()
    x += suf[p[0]];

    cout << x << "\n";
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