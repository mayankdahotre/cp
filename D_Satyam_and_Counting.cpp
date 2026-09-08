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

//     vector<pair<int,int>> v;
//     for(int i=0; i<n; i++) cin>>v[i].first>>v[i].second;

//     map<int, set<int>> mp;
//     for(int i=0; i<n; i++) mp[v[i].first].insert(v[i].second);

//     int ans=0;
//     for(auto p: mp) if(p.second.size()==2) ans+=n-2;

//     vector<int> x;
//     for(int i=0; i<n; i++) x.push_back(v[i].first);

//     sort(x.begin(), x.end());
//     x.erase(unique(x.begin(), x.end()), x.end());

//     for(int i=1; i<x.size()-1; i++){
//         if(x[i-1]=x[i]-1 && x[i]+1==x[i+1]){
//             if(mp[x[i]].find(1)!=mp.end() && mp[x[i-1]].find(0)!=mp.end() && mp[x[i-1]].find(0)!=mp.end()) ans++;
//             if(mp[x[i]].find(0)!=mp.end() && mp[x[i-1]].find(1)!=mp.end() && mp[x[i-1]].find(1)!=mp.end()) ans++;
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
    int n;
    cin>>n;

    vector<pair<int,int>> v(n); // Fixed: allocated size n
    for(int i=0; i<n; i++) cin>>v[i].first>>v[i].second;

    map<int, set<int>> mp;
    for(int i=0; i<n; i++) mp[v[i].first].insert(v[i].second);

    int ans=0;
    for(auto p: mp) if(p.second.size()==2) ans+=n-2;

    vector<int> x;
    for(int i=0; i<n; i++) x.push_back(v[i].first);

    sort(x.begin(), x.end());
    x.erase(unique(x.begin(), x.end()), x.end());

    int sz = x.size();
    for(int i=1; i<sz-1; i++){
        if(x[i-1] == x[i]-1 && x[i]+1 == x[i+1]){ 
            if(mp[x[i]].count(1) && mp[x[i-1]].count(0) && mp[x[i+1]].count(0)) ans++; 
            if(mp[x[i]].count(0) && mp[x[i-1]].count(1) && mp[x[i+1]].count(1)) ans++; 
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