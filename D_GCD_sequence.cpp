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
//     for(int i=0; i<n; i++) cin>>v[i];

//     vector<int> gv(n-1);
//     for(int i=0; i<n-1; i++) gv[i]=__gcd(v[i], v[i+1]);

//     // debugv(gv);

//     int x=0;
//     for(int i=0; i<n-1; i++) if(gv[i]>gv[i+1]) x++;

//     if(is_sorted(gv.begin(), gv.end())){
//         yes;
//         return;
//     }

//     if(x>2){
//         no;
//         return;
//     }

//     vector<int> di;
//     for(int i=0; i<n-1; i++) if(gv[i]>gv[i+1]) di.push_back(i);

//     if(x==2 && abs(di[0]-di[1])>1){
//         no;
//         return;
//     }

//     if(is_sorted(v.begin()+1, v.end()) || is_sorted(v.begin(), v.end()-1)){
//         yes;
//         return;
//     }

//     for(int i=1; i<n-2; i++){
//         int g = __gcd(v[i], v[i+2]);

//         if(gv[i-1]<=g && g<=gv[i+2]){
//             yes;
//             return;
//         }
//     }

//     no;
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
#define yes cout << "YES\n"
#define no cout << "NO\n"

bool check(const vector<int>& v, int bi){
    int n = v.size();
    vector<int> v2;
    for(int i = 0; i < n; i++) if(i != bi) v2.push_back(v[i]);

    vector<int> gv;
    for(int i = 0; i < (int)v2.size() - 1; i++) gv.push_back(__gcd(v2[i], v2[i+1]));

    return is_sorted(gv.begin(), gv.end());
}

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    vector<int> gv(n - 1);
    for(int i = 0; i < n - 1; i++) gv[i] = __gcd(v[i], v[i+1]);

    for(int i = 0; i < n - 2; i++){
        if(gv[i] > gv[i+1]) {
            if(check(v, i) || check(v, i+1) || check(v, i+2)) yes;
            else no;
            return;
        }
    }

    yes;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) solve();

    return 0;
}