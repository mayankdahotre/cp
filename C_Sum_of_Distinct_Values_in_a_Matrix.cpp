#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cerr << #x << " = " << (x) << endl;
#define debug2(a, b) cerr << #a << "=" << (a) << " | " << #b << "=" << (b) << endl;
#define debug3(a, b, c) cerr << #a << "=" << (a) << " | " << #b << "=" << (c) << endl;
#define debugp(p) cerr << #p << " = {" << (p).first << ", " << (p).second << "}" << endl;
#define debugv(v) { cerr << #v << " = [ "; for(auto &it : v) cerr << it << ' '; cerr << "]" << endl; }
#define debugvp(v) { cerr << #v << " = [ "; for(auto &p : v) cerr << "{" << p.first << "," << p.second << "} "; cerr << "]" << endl; }
#define debugvv(v) { cerr << #v << " = \n"; for(auto &r : v){ cerr << "  [ "; for(auto &x : r) cerr << x << ' '; cerr << "]\n"; } }
#define debugm(m) { cerr << #m << " = {\n"; for(auto &p : m) cerr << "  " << p.first << " -> " << p.second << "\n"; cerr << "}" << endl; }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n,m,x,y;
    cin>>n>>m>>x>>y;
    
    vector<int> a(x), b(y);
    for(int i=0; i<x; i++) cin>>a[i];
    for(int i=0; i<y; i++) cin>>b[i];

    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());

    sort(b.begin(), b.end());
    b.erase(unique(b.begin(), b.end()), b.end());

    vector<int> c,d,e;
    int i=0, j=0;

    while(i<a.size() && j<b.size()){
        if(a[i]==b[j]){
            c.push_back(a[i]);
            i++; j++;
        }
        else if(a[i]<b[j]){
            d.push_back(a[i]);
            i++;
        }
        else{
            e.push_back(b[j]);
            j++;
        }
    }
    while(i<a.size()) d.push_back(a[i++]);
    while(j<b.size()) e.push_back(b[j++]);

    sort(d.rbegin(), d.rend());
    sort(e.rbegin(), e.rend());

    vector<int> pool;
    for(int k=0; k<min((int)d.size(), n); k++) pool.push_back(d[k]);
    for(int k=0; k<min((int)e.size(), m); k++) pool.push_back(e[k]);
    for(auto val : c) pool.push_back(val);

    sort(pool.rbegin(), pool.rend());

    int ans=0;
    for(int k=0; k<min((int)pool.size(), n+m-1); k++) ans+=pool[k];

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





// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cerr << #x << " = " << (x) << endl;
// #define debug2(a, b) cerr << #a << "=" << (a) << " | " << #b << "=" << (b) << endl;
// #define debug3(a, b, c) cerr << #a << "=" << (a) << " | " << #b << "=" << (c) << endl;
// #define debugp(p) cerr << #p << " = {" << (p).first << ", " << (p).second << "}" << endl;
// #define debugv(v) { cerr << #v << " = [ "; for(auto &it : v) cerr << it << ' '; cerr << "]" << endl; }
// #define debugvp(v) { cerr << #v << " = [ "; for(auto &p : v) cerr << "{" << p.first << "," << p.second << "} "; cerr << "]" << endl; }
// #define debugvv(v) { cerr << #v << " = \n"; for(auto &r : v){ cerr << "  [ "; for(auto &x : r) cerr << x << ' '; cerr << "]\n"; } }
// #define debugm(m) { cerr << #m << " = {\n"; for(auto &p : m) cerr << "  " << p.first << " -> " << p.second << "\n"; cerr << "}" << endl; }
// #define yes cout << "YES\n"
// #define no cout << "NO\n"

// void solve() {
//     int n,m,x,y;
//     cin>>n>>m>>x>>y;
    
//     vector<int> a(x), b(y);
//     for(int i=0; i<x; i++) cin>>a[i];
//     for(int i=0; i<y; i++) cin>>b[i];

//     vector<int> v; 

//     for(int i=0; i<x; i++) v.push_back(a[i]);
//     for(int i=0; i<y; i++) v.push_back(b[i]);

//     sort(v.rbegin(), v.rend());
//     v.erase(unique(v.begin(), v.end()), v.end());

//     int ans=0;
//     for(int i=0; i<min((int)v.size(), n+m-1); i++) ans+=v[i];

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