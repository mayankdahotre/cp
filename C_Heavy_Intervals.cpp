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

//     vector<int> l(n), r(n), c(n);
//     for(int i=0; i<n; i++) cin>>l[i];
//     for(int i=0; i<n; i++) cin>>r[i];
//     for(int i=0; i<n; i++) cin>>c[i];

//     sort(c.begin(), c.end(), greater<int>());

//     sort(r.begin(), r.end());

//     set<int> s(l.begin(), l.end());

//     vector<int> d;
//     for(int i=0; i<n; i++){
//         int y = prev(s.upper_bound(r[i]));

//         d.push_back(r[i]-y);

//         s.erase(y);
//     }

//     sort(d.begin(), d.end());

//     int ans=0;
//     for(int i=0; i<n; i++) ans+=d[i]*c[i];

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

    vector<int> l(n), r(n), c(n);
    for(int i=0; i<n; i++) cin>>l[i];
    for(int i=0; i<n; i++) cin>>r[i];
    for(int i=0; i<n; i++) cin>>c[i];

    sort(c.begin(), c.end(), greater<int>());

    sort(l.begin(), l.end());
    sort(r.begin(), r.end());

    set<int> s(l.begin(), l.end());

    vector<int> d;
    for(int i=0; i<n; i++){
        auto it = prev(s.upper_bound(r[i]));
        int y = *it; // Added '*' to dereference iterator

        d.push_back(r[i]-y);

        s.erase(it); // Erase iterator directly
    }

    sort(d.begin(), d.end());

    int ans=0;
    for(int i=0; i<n; i++) ans+=d[i]*c[i];

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