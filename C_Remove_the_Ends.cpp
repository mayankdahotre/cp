// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     vector<int> pre(n+1,0), suf(n+1,0);

//     for(int i=1; i<n; i++){
//         pre[i]=pre[i-1];
//         if(v[i-1]<0) pre[i]+=abs(v[i-1]);
//     }

//     for(int i=n-1; i>=0; i--){
//         suf[i]=suf[i+1];
//         if(v[i]>0) suf[i]+=v[i];
//     }

//     int ans=0;
//     for(int i=0; i<=n; i++){
//         ans=max(ans, pre[i]+suf[i]);
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

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    vector<int> pre(n),suf(n);

    for(int i=0; i<n; i++){
        if(v[i]>0) pre[i]+=v[i];
        if(i>0) pre[i]+=pre[i-1];
    }

    for(int i=n-1; i>=0; i--){
        if(v[i]<0) suf[i]+=abs(v[i]);
        if(i<n-1) suf[i]+=suf[i+1];
    }

    int ans=0;
    for(int i=0; i<n; i++) ans=max(ans, pre[i]+suf[i]);

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