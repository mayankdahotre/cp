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
//     int n,k;
//     cin>>n>>k;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     sort(v.begin(), v.end());
//     if(k>=3){
//         cout<<0<<endl;
//         return;
//     }
//     else{
//         sort(v.begin(), v.end());

//         int ans=abs(v[1]-v[0]);
//         for(int i=0; i<n-1; i++) ans=min(ans, abs(v[i+1]-v[i]));

//         k--;

//         if(k==0){
//             cout<<ans<<endl;
//             return;
//         }

//         // int l = *lower_bound(v.begin(), v.end(), ans);
//         // int r = *upper_bound(v.begin(), v.end(), ans);

//         // ans = min({ans, abs(r-ans), abs(ans-l)});

//         // cout<<ans<<endl;
//         // return;

//         // map<int,int> mp;

//         for(int i=0; i<n; i++){
//             for(int j=i+1; j<n; j++){
//                 int y = abs(v[i]-v[j]);

//                 int l2 = *lower_bound(v.begin(), v.end(), y);
//                 ans = min(ans, abs(y-l2));
//             }
//         }

        
//         // for(int i=0; i<n; i++){
//         //     if(v[i]<0) continue;

//             // int l2 = *upper_bound(v.begin(), v.end(), 2*v[i]);
//             // ans = min(ans, l2-2*v[i]);
//         // }

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
    int n,k;
    cin>>n>>k;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end());

    if(k>=3){
        cout<<0<<endl;
        return;
    }

    int ans=v[0];
    for(int i=0; i<n-1; i++) ans=min(ans, abs(v[i+1]-v[i]));

    k--;

    if(k==0){
        cout<<ans<<endl;
        return;
    }

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int y = abs(v[i]-v[j]);

            ans = min(ans, y);

            auto it = lower_bound(v.begin(), v.end(), y);

            if(it != v.end()) ans = min(ans, abs(y - *it));
            if(it != v.begin()) ans = min(ans, abs(y - *prev(it)));
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