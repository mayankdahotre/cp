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

//     sort(v.begin(), v.end());

//     vector<pair<int,int>> v2;
//     int x=0;
//     int el=v[0];
//     for(int i=0; i<n; i++){
//         if(v[i]==el) x++;
//         else{
//             v2.push_back({el,x});
//             x=1;
//             el=v[i];
//         }
//     }
//     v2.push_back({el,x});

//     int m = v2.size();

//     int p=0, q=0;
//     for(int i=0; i<m; i++){
//         for(int j=i; j<m; j++){
//             if(j==i){
//                 p+=v2[i].second*(v2[i].second-1)/2;
//                 q+=v2[i].second*(v2[i].second-1)*v2[i].first/2;
//             }
//             else{
//                 p+=v2[i].second*v2[j].second;
//                 q+=v2[i].second*v2[j].second*v2[i].first*v2[j].first;
//             }
//         }
//     }

//     int mod = 1e9 + 7;
//     int g = __gcd(p,q);
//     if(g==q){
//         cout<<(p/q)%mod<<endl;
//         return;
//     }
//     else{
//         int y = mod-2;
//         int q_inv = 1;
//         while(y){
//             if(y%2){
//                 q_inv = (q_inv*q)%mod;
//                 y--;
//             }
//             else{
//                 q=(q*q)%mod;
//                 y=y/2;
//             }
//         }

//         int ans = (p*q_inv)%mod;

//         cout<<ans<<endl;
//         return;
//     }
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
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     sort(v.begin(), v.end());

//     vector<pair<int,int>> v2;
//     int x=0;
//     int el=v[0];
//     for(int i=0; i<n; i++){
//         if(v[i]==el) x++;
//         else{
//             v2.push_back({el,x});
//             x=1;
//             el=v[i];
//         }
//     }
//     v2.push_back({el,x});

//     int m = v2.size();
//     int mod = 1e9 + 7;

//     int p=0, q=0;
//     for(int i=0; i<m; i++){
//         for(int j=i; j<m; j++){
//             if(j==i){
//                 int cnt = (v2[i].second * (v2[i].second - 1) / 2) % mod;
//                 int prod = (v2[i].first % mod * (v2[i].first % mod)) % mod;
                
//                 p = (p + cnt) % mod;
//                 q = (q + cnt * prod) % mod;
//             }
//             else{
//                 int cnt = (v2[i].second * v2[j].second) % mod;
//                 int prod = (v2[i].first % mod * (v2[j].first % mod)) % mod;

//                 p = (p + cnt) % mod;
//                 q = (q + cnt * prod) % mod;
//             }
//         }
//     }

//     // Calculating q * (p^-1) mod 1e9+7
//     int y = mod-2;
//     int p_inv = 1;
//     while(y){
//         if(y%2){
//             p_inv = (p_inv * p) % mod;
//             y--;
//         }
//         else{
//             p = (p * p) % mod;
//             y = y / 2;
//         }
//     }

//     int ans = (q * p_inv) % mod;
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

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int mod = 1e9 + 7;

    int sum=0;
    for(int i=0; i<n; i++){
        v[i]=v[i]%mod;
        sum+=v[i];
    }

    int p=0;
    for(int i=0; i<n; i++){
        sum-=v[i];
        p=(p+(sum*v[i])%mod)%mod;
    }

    int q = (n * (n - 1) / 2) % mod;

    int y = mod - 2;
    int q_inv = 1;
    int temp_q = q;
    while(y) {
        if(y % 2) {
            q_inv = (q_inv * temp_q) % mod;
            y--;
        } else {
            temp_q = (temp_q * temp_q) % mod;
            y = y / 2;
        }
    }

    int ans = (p * q_inv) % mod;
cout << ans << endl;
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