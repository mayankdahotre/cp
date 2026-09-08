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

// bool cmp(pair<int,int> a, pair<int,int> b){
//     if(a.first==b.first) return a.second<b.second;
//     return a.first<b.first;
// }

// void solve() {
//     int n,x;
//     cin>>n>>x;

//     vector<int> a(n);
//     for(int i=0; i<n; i++) cin>>a[i];

//     vector<int> b(n);
//     for(int i=0; i<n; i++) cin>>b[i];

//     sort(b.begin(), b.end());

//     int mna = *min_element(a.begin(), a.end());
//     int mxa = *max_element(a.begin(), a.end());

//     int l = lower_bound(b.begin(), b.end(), mna);
//     int h = lower_bound(b.begin(), b.end(), mxa);

//     if(x<l || x>h){
//         no;
//         return;
//     }

//     yes;
    
//     vector<pair<int,int>> ap(n);
//     for(int i=0; i<n; i++){
//         ap[i].first=a[i];
//         ap[i].second=i;
//     }

//     sort(ap.begin(), ap.end(), cmp);

//     vector<int> ans(n);
//     for(int i=0; i<n; i++) ans[i]=b[(i+x)%n];

//     for(int i=0; i<n; i++) cout<<ans[i]<<" ";
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

bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.first==b.first) return a.second<b.second;
    return a.first<b.first;
}

void solve() {
    int n,x;
    cin>>n>>x;

    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    vector<int> b(n);
    for(int i=0; i<n; i++) cin>>b[i];

    sort(b.begin(), b.end());

    int mna = *min_element(a.begin(), a.end());
    int mxa = *max_element(a.begin(), a.end());

    int l = lower_bound(b.begin(), b.end(), mna) - b.begin();
    int h = lower_bound(b.begin(), b.end(), mxa) - b.begin();

    if(x<l || x>h){
        no;
        return;
    }

    yes;
    
    vector<pair<int,int>> ap(n);
    for(int i=0; i<n; i++){
        ap[i].first=a[i];
        ap[i].second=i;
    }

    sort(ap.begin(), ap.end(), cmp);

    vector<int> ans(n);
    for(int i=0; i<n; i++) ans[ap[i].second]=b[(i+x)%n];

    for(int i=0; i<n; i++) cout<<ans[i]<<" ";
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