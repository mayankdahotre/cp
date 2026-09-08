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
//     cin >> n;

//     vector<int> v(n);
//     for(int i = 0; i < n; i++) cin >> v[i];

//     map<int, vector<pair<int, int>>> m;

//     for(int i = 0; i < n; i++) {
//         int x = v[i];
//         int c = 0;

//         m[x].push_back({i, c});

//         bool b1 = (x == 1), b2 = (x == 2);
//         while(!(b1 && b2) && c < 100) {
//             if(x % 2 == 0) x /= 2;
//             else x += 1;
//             c++;
//             m[x].push_back({i, c});

//             if(x==1) b1=true;
//             if(x==2) b2=true;
//         }
//     }

//     int ans = 1e18;

//     for(auto &it : m) {
//         if((int)it.second.size() == n) {
//             int sum = 0;
//             for(auto &p : it.second) {
//                 sum += p.second;
//             }
//             ans = min(ans, sum);
//         }
//     }

//     cout << ans << endl;
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

    map<int, vector<pair<int,int>>> mp;
    
    for(int i=0; i<n; i++){
        int x = v[i];

        int m=0;
        mp[x].push_back({m,i});

        set<int> seen; 
        seen.insert(x);

        bool b1 = (x==1), b2 = (x==2);
        while(!(b1 && b2)){
            if(x%2) x++;
            else x/=2;

            m++;

            if(x==1) b1 = true;
            if(x==2) b2 = true;

            if(seen.find(x) == seen.end()) {
                seen.insert(x);
                mp[x].push_back({m,i});
            } else if (b1 && b2) {
                break;
            }
        }
    }

    int ans = 1e18;

    for(auto &p: mp){
        if(p.second.size()==n){
            int y=0;
            for(auto &item : p.second) y += item.first;
            ans=min(y, ans);
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