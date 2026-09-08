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
//     int n;
//     cin>>n;

//     vector<int> v(n);

//     vector<vector<int>> vv(64);
    
//     for(int i=0; i<n; i++){
//         cin >> v[i];
//         int x = (v[i] == 0) ? 0 : 63 - __builtin_clzll(v[i]);
//         vv[x].push_back(v[i]);
//     }

//     for(int i=0; i<64; i++) sort(vv[i].begin(), vv[i].end());
    
//     vector<int> res;
//     for(int i=63; i>=0; i--){
//         if(vv[i].size()){
//             res.push_back(vv[i].back());
//             vv[i].pop_back();
//         }
//     }

//     for(int i=63; i>=0; i--){
//         while(vv[i].size()){
//             res.push_back(vv[i].back());
//             vv[i].pop_back();
//         }
//     }

//     for(int i=0; i<res.size(); i++) cout<<res[i]<<" ";
//     cout<<endl;

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
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end(), greater<int>());

    vector<int> vis(n,0);
    vector<int> res;

    int mx = 0;
    for(int k=0; k<min(n, 31LL); k++){
        int curor = mx;
        int i = -1;
        for(int j=0; j<n; j++){
            if(!vis[j] && (curor | v[j]) > mx){ 
                i=j;
                mx = curor | v[j];
            }
        }

        if(i == -1) break; 

        vis[i]=1;
        res.push_back(v[i]);
    }

    for(int i=0; i<n; i++) if(!vis[i]) res.push_back(v[i]);

    for(int i=0; i<n; i++) cout<<res[i]<<" ";
    cout<<endl;

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