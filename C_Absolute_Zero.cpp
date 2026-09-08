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

//     vector<int> res;

//     int k=0;
//     float x=0;
//     while(true){
//         if(k%2==0) x=(v[n-1]+v[n-2])/2;
//         else x = (v[0]+v[1])/2;

//         if(x!=(int)x){
//             cout<<-1<<endl;
//             return;
//         }
//         if(v[0]==v[n-1] && v[0]==0) break;
//         for(int i=0; i<n; i++) v[i]=abs(v[i]-x);

//         k++;
//         res.push_back(x);
//     }

//     if(!res.size()){
//         cout<<0<<endl;
//         cout<<endl;
//         return;
//     }

//     if(res.size()>40){
//         cout<<-1<<endl;
//         return;
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
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    if(n == 1) {
        cout << 1 << endl;
        cout << v[0] << endl;
        return;
    }

    // Check parity across adjacent elements
    for(int i = 0; i < n - 1; i++) {
        if(abs(v[i] % 2) != abs(v[i + 1] % 2)) {
            cout << -1 << endl;
            return;
        }
    }

    vector<int> res;

    while(true) {
        sort(v.begin(), v.end());

        // Breaks when min == max and elements reduce to 0
        if(v[0] == v[n - 1] && v[0] == 0) break;

        int x = (v[0] + v[n - 1]) / 2;
        res.push_back(x);

        for(int i = 0; i < n; i++) {
            v[i] = abs(v[i] - x);
        }
    }

    if(res.size() > 40) {
        cout << -1 << endl;
        return;
    }

    cout << res.size() << endl;
    for(int i = 0; i < res.size(); i++) {
        cout << res[i] << (i == res.size() - 1 ? "" : " ");
    }
    cout << endl;

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