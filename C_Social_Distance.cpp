// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
// #define yes cout << "YES\n"
// #define no cout << "NO\n"

// void solve() {
//     int n,k;
//     cin>>n>>k;

//     string s;
//     cin>>s;

//     int n1=0;
//     for(int i=0; i<n; i++) if(s[i]=='1') n1++;

//     int ans=0;
//     int c1=0, d=0;
//     for(int i=0; i<n; i++){
//         if(s[i]=='0') d++;
//         else{
//             c1++;
//             if(c1==1) ans+=d/(k+1);
//             else{
//                 d-=2*k+1;
//                 if(d) ans++;
//                 ans+=d/(k+1);
//             }
//             d=0;
//         }
//     }

//     if(c1==0){
//         ans++;
//         ans+=(d-1)/(k+1);
//     }
//     else if(d) ans+=d/(k+1);

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

void solve() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int n1 = 0;
    for(int i = 0; i < n; i++) if(s[i] == '1') n1++;

    int ans = 0;
    int c1 = 0, d = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == '0') d++;
        else {
            c1++;
            if(c1 == 1) ans += d / (k + 1);
            else {
                if (d > 2 * k) {
                    ans += (d - k) / (k + 1);
                }
            }
            d = 0;
        }
    }

    if(c1 == 0) {
        ans++;
        ans += (d - 1) / (k + 1);
    }
    else if(d) ans += d / (k + 1);

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