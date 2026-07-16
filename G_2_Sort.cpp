// #include <bits/stdc++.h>
// using namespace std;

// #define int long long
// #define debug(x) cout << #x << " = " << x << endl;
// #define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
// #define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

// void solve() {
//     int n,k;
//     cin>>n>>k;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     vector<int> ok(n,1);
//     for(int i=0; i<n-1; i++) if(v[i]>2*v[i+1]) ok[i]=0;

//     ok[n]=0;
//     for(int i=1; i<=n; i++) ok[i]+=ok[i-1];

//     int ans=0;
//     for(int i=0; i<n-k; i++) if(ok[i+k+1]-ok[i]) ans++;

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
    int n,k;
    cin>>n>>k;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    vector<int> ok(n,0);
    for(int i=0; i<n-1; i++) if(v[i]<2*v[i+1]) ok[i]=1; 

    vector<int> pre(n+1,0);
    for(int i=0; i<n; i++) pre[i+1]=pre[i]+ok[i];        

    int ans=0;
    for(int i=0; i<=n-k-1; i++) if(pre[i+k]-pre[i]==k) ans++;

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