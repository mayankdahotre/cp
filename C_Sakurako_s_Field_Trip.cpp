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

//     for(int i=1; i<n/2; i++){
//         if(v[i]==v[n-1-i]) continue;
//         else if(v[i]==v[i-1]) swap(v[i],v[n-1-i]);
//     }

//     for(int i=n-i; i>n/2; i--){
//         if(v[i]==v[n-i-1]) continue;
//         else if(v[n-i-1]==v[n-i]) swap(v[i], v[n-1-i]);
//     }

//     // debugv(v);

//     int ans=0;
//     for(int i=0; i<n-1; i++) if(v[i]==v[i+1]) ans++;

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

    // for(int i=0; i<n/2; i++){
    //     if(v[i]==v[n-1-i]) continue;
    //     else if(i>0 && v[i]==v[i-1]) swap(v[i],v[n-1-i]);
    // }

    // for(int i=n/2-1; i>=0; i--){
    //     if(v[i]==v[n-1-i]) continue;
    //     else if(i<n-1 && v[n-1-i]==v[n-i]) swap(v[i], v[n-1-i]);
    // }

    for(int i=1; i<n/2; i++){
        int a=v[i-1], b=v[i], c=v[n-1-i], d=v[n-i];
        if(b==c) continue;
        else if(a==d) continue;
        else if(b==a || c==d) swap(v[i], v[n-1-i]);
    }

    // debugv(v);

    int ans=0;
    for(int i=0; i<n-1; i++) if(v[i]==v[i+1]) ans++;

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