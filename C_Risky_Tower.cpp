// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cerr << #x << " = " << (x) << endl;
// #define debug2(a, b) cerr << #a << "=" << (a) << " | " << #b << "=" << (b) << endl;
// #define debug3(a, b, c) cerr << #a << "=" << (a) << " | " << #b << "=" << (b) << " | " << #c << "=" << (c) << endl;
// #define debugp(p) cerr << #p << " = {" << (p).first << ", " << (p).second << "}" << endl;
// #define debugv(v) { cerr << #v << " = [ "; for(auto &it : v) cerr << it << ' '; cerr << "]" << endl; }
// #define debugvp(v) { cerr << #v << " = [ "; for(auto &p : v) cerr << "{" << p.first << "," << p.second << "} "; cerr << "]" << endl; }
// #define debugvv(v) { cerr << #v << " = \n"; for(auto &r : v){ cerr << "  [ "; for(auto &x : r) cerr << x << ' '; cerr << "]\n"; } }
// #define debugm(m) { cerr << #m << " = {\n"; for(auto &p : m) cerr << "  " << p.first << " -> " << p.second << "\n"; cerr << "}" << endl; }
// #define yes cout << "YES\n"
// #define no cout << "NO\n"

// void solve() {
//     int n,m;
//     cin>>n>>m;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     vector<vector<int>> d(n, vector<int>(m));
//     for(int i=0; i<n; i++) for(int j=0; j<m; j++) cin>>d[i][j];

//     int ans = m;
//     int x=0;

//     for(int i=1; i<n; i++) v[i]=min(v[i], v[i-1]);

//     for(int i=0; i<n; i++){
//         sort(d[i].begin(), d[i].end(), greater<int>());
        
//         int x=0;
//         for(int j=0; j<m; j++){
//             x+=d[i][j];
//             if(x>=v[i]){
//                 ans=min(ans, j+1);
//             }
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







#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cerr << #x << " = " << (x) << endl;
#define debug2(a, b) cerr << #a << "=" << (a) << " | " << #b << "=" << (b) << endl;
#define debug3(a, b, c) cerr << #a << "=" << (a) << " | " << #b << "=" << (b) << " | " << #c << "=" << (c) << endl;
#define debugp(p) cerr << #p << " = {" << (p).first << ", " << (p).second << "}" << endl;
#define debugv(v) { cerr << #v << " = [ "; for(auto &it : v) cerr << it << ' '; cerr << "]" << endl; }
#define debugvp(v) { cerr << #v << " = [ "; for(auto &p : v) cerr << "{" << p.first << "," << p.second << "} "; cerr << "]" << endl; }
#define debugvv(v) { cerr << #v << " = \n"; for(auto &r : v){ cerr << "  [ "; for(auto &x : r) cerr << x << ' '; cerr << "]\n"; } }
#define debugm(m) { cerr << #m << " = {\n"; for(auto &p : m) cerr << "  " << p.first << " -> " << p.second << "\n"; cerr << "}" << endl; }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n,m;
    cin>>n>>m;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    vector<vector<int>> d(n, vector<int>(m));
    for(int i=0; i<n; i++) for(int j=0; j<m; j++) cin>>d[i][j];

    int ans = m;

    for(int i=1; i<n; i++) v[i]=min(v[i], v[i-1]);

    vector<int> pool;

    for(int i=n-1; i>=0; i--){
        for(int j=0; j<m; j++) pool.push_back(d[i][j]);
        
        sort(pool.rbegin(), pool.rend());
        if((int)pool.size() > m) pool.resize(m);

        int x = 0;
        for(int j=0; j<(int)pool.size(); j++){
            x += pool[j];
            if(x >= v[i]){
                ans = min(ans, j + 1);
                break;
            }
        }
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