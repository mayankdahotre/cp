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

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    vector<int> p(m);
    for(int i = 0; i < m; i++) cin >> p[i];

    vector<int> suf(n + 1, 0);
    for(int i = n - 1; i >= 0; i--) suf[i] = suf[i+1] + v[i];

    sort(p.begin(), p.end(), greater<int>());

    int x = abs(suf[0] - suf[p.back()]);

    for(int i = m - 1; i > 0; i--) {
        int r = p[i];
        int l = p[i-1];
        x += abs(suf[r] - suf[l]);
    }

    x += suf[p[0]];

    cout << x << endl;
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