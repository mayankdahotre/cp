// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
// #define yes cout << "YES\n"
// #define no cout << "NO\n"

// void solve() {
//     int n;
//     cin>>n;

//     string s;
//     cin>>s;

//     for(int i=0; i<n-2; i++){
//         if(s[i]==s[i+2] && s[i]!='?'){
//             cout<<0<<endl;
//             return;
//         }
//     }

//     int o=0, e=0;
//     for(int i=0; i<n; i++){
//         if(s[i]=='?'){
//             if(i%2) o++;
//             else e++;
//         }
//     }

//     int ans=1;
//     if(n%2){
//         if(e==(n+1)/2) ans*=2;
//         if(o==n/2) ans*=2;
//     }
//     else{
//         if(e==n/2) ans*=2;
//         if(o==n/2) ans*=2;
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
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    string sl = "", sr = "";
    for(int i = 0; i < n; i += 2) sl += s[i];
    for(int i = 1; i < n; i += 2) sr += s[i];

    // l0/r0: pattern starting with '0' (0,1,0,1...)
    // l1/r1: pattern starting with '1' (1,0,1,0...)
    bool l0 = true, l1 = true;
    bool r0 = true, r1 = true;

    for(int i = 0; i < sl.size(); i++){
        if(i % 2 == 0){
            if(sl[i] == '1') l0 = false;
            if(sl[i] == '0') l1 = false;
        } else {
            if(sl[i] == '0') l0 = false;
            if(sl[i] == '1') l1 = false;
        }
    }

    for(int i = 0; i < sr.size(); i++){
        if(i % 2 == 0){
            if(sr[i] == '1') r0 = false;
            if(sr[i] == '0') r1 = false;
        } else {
            if(sr[i] == '0') r0 = false;
            if(sr[i] == '1') r1 = false;
        }
    }

    int ans = (l0 + l1) * (r0 + r1) % 998244353;

    cout << ans << endl;
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