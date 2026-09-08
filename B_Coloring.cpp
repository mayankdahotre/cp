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
//     int n,m,k;
//     cin>>n>>m>>k;

//     vector<int> v(m);
//     for(int i=0; i<m; i++) cin>>v[i];

//     sort(v.begin(), v.end());

//     vector<int> pre(m+1,0), suf(m+1,0);
//     for(int i=0; i<m; i++) pre[i+1]=pre[i]+v[i];
//     for(int i=m-1; i>=0; i--) suf[i]=suf[i+1]+v[i];

//     for(int i=0; i<m; i++){
//         if((pre[i]+suf[i+1])<(v[i]-1)*(k-1)){
//             no;
//             return;
//         }
//     }

//     yes;
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
//     int n,m,k;
//     cin>>n>>m>>k;

//     vector<int> v(m);
//     for(int i=0; i<m; i++) cin>>v[i];

//     sort(v.begin(), v.end());

//     for(int i=0; i<m; i++){
//         int pad=0;
//         for(int j=0; j<m; j++){
//             if(i!=j) pad+=min(v[j], v[i]-1);
//         }

//         if(pad<(v[i]-1)*(k-1)){
//             no;
//             return;
//         }
//     }

//     yes;
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
    int n,m,k;
    cin>>n>>m>>k;

    vector<int> v(m);
    for(int i=0; i<m; i++) cin>>v[i];

    sort(v.begin(), v.end());

    int mx=v[m-1];
    int pad=0;
    for(int i=0; i<m-1; i++){
        pad+=min(v[i], mx-1);
    }

    if(pad<(mx-1)*(k-1)){
        no;
        return;
    }

    yes;
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