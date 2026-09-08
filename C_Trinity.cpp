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

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     sort(v.begin(), v.end());

//     vector<int> v2=v;
//     v2.erase(unique(v2.begin(), v2.end()), v2.end());

//     int m = v2.size();

//     map<int,int> f;
//     for(int i=0; i<n; i++) f[v[i]]++;

//     int ans=0;

//     vector<int> pre(m+1,0);
//     for(int i=0; i<m; i++) pre[i+1]=pre[i]+f[v2[i]];

//     for(int i=0; i<v2.size(); i++){
//         int a = v2[i];
//         int bi = lower_bound(v2.begin(), v2.end(), 2*a)-v2.begin();
//         int b = v2[bi];
//         int x=0;

//         if(b==a) x+=min(max(0LL,f[a]-1), max(0LL, f[b]-1));
//         x+=pre[i-1]+pre[m]-pre[bi-1];
        
//         ans=min(ans, x);
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
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end());

    vector<int> v2=v;
    v2.erase(unique(v2.begin(), v2.end()), v2.end());

    int m = v2.size();

    map<int,int> f;
    for(int i=0; i<n; i++) f[v[i]]++;

    int ans=n;

    vector<int> pre(m+1,0);
    for(int i=0; i<m; i++) pre[i+1]=pre[i]+f[v2[i]];

    for(int i=0; i<m; i++){
        int a = v2[i];
        int bi = lower_bound(v2.begin(), v2.end(), 2*a)-v2.begin();
        int x=0;

        if(v2[bi]==2*a) x+=min(f[v2[bi]]-1, f[a]-1);
        x+=pre[i]+(pre[m]-pre[bi]);
        
        ans=min(ans, x);
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