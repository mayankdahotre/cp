// // #include <bits/stdc++.h>
// // using namespace std;

// // #define int long long
// // #define debug(x) cout << #x << " = " << x << endl;
// // #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// // #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
// // #define yes cout << "YES\n"
// // #define no cout << "NO\n"

// // void solve() {
// //     int n,s;
// //     cin>>n>>s;

// //     vector<int> v(n);
// //     for(int i=0; i<n; i++) cin>>v[i];

// //     int sum=0;
// //     for(int i=0; i<n; i++) sum+=v[i];

// //     if(sum<s){
// //         cout<<-1<<endl;
// //         return;
// //     }

// //     if(sum==s){
// //         cout<<0<<endl;
// //         return;
// //     }

// //     int ans=0;

// //     vector<int> pre(n,0), suf(n,0);
// //     for(int i=0; i<n; i++) if(v[i]==1) pre.push_back(i+1);
// //     for(int i=n-1; i>=0; i--) if(v[i]==1) suf.push_back(n-i);

// //     for(int i=0; i<s-sum; i++) ans=min(ans, pre[i]+suf[s-sum-i]);

// //     cout<<ans<<endl;
// //     return;
// // }

// // int32_t main() {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     cout.tie(NULL);

// //     int T;
// //     cin >> T;

// //     while (T--) {
// //         solve();
// //     }

// //     return 0;
// // }



// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
// #define yes cout << "YES\n"
// #define no cout << "NO\n"

// void solve() {
//     int n,s;
//     cin>>n>>s;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     int sum=0;
//     for(int i=0; i<n; i++) sum+=v[i];

//     if(sum<s){
//         cout<<-1<<endl;
//         return;
//     }

//     if(sum==s){
//         cout<<0<<endl;
//         return;
//     }

//     vector<int> pre, suf;
//     pre.push_back(0);
//     suf.push_back(0);

//     for(int i=0; i<n; i++) if(v[i]==1) pre.push_back(i+1);
//     for(int i=n-1; i>=0; i--) if(v[i]==1) suf.push_back(n-i);

//     int rem = sum - s;
//     int ans = 1e18;

//     for(int i=0; i<=rem; i++) {
//         ans = min(ans, pre[i] + suf[rem - i]);
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
    int n, s;
    cin >> n >> s;

    vector<int> v(n);
    int sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }

    if(sum < s) {
        cout << -1 << endl;
        return;
    }

    if(sum == s) {
        cout << 0 << endl;
        return;
    }

    int l = 0, cur = 0, mx = 0;
    for(int r = 0; r < n; r++) {
        cur += v[r];
        while(cur > s) {
            cur -= v[l];
            l++;
        }
        if(cur == s) mx = max(mx, r - l + 1);
    }

    cout << n - mx << endl;
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