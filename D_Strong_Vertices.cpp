// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> a(n), b(n);
//     for(int i=0; i<n; i++) cin>>a[i];
//     for(int i=0; i<n; i++) cin>>b[i];

//     vector<int> v(n);
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(a[i]-a[j]>=b[i]-b[j]){
//                 v[i]++;
//                 v[j]++;
//             }
//         }
//     }

//     int ans = 0;
//     for(int i=0; i<n; i++) if(v[i]==n) ans++;

//     cout<<ans<<endl;
//     for(int i=0; i<n; i++) if(v[i]==n) cout<<i+1<<" ";
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

void solve() {
    int n;
    cin>>n;

    vector<int> a(n), b(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];

    vector<int> c(n);
    for(int i=0; i<n; i++) c[i] = a[i]-b[i];

    int mx = *max_element(c.begin(), c.end());

    int ans = 0;
    for(int i=0; i<n; i++) if(c[i]==mx) ans++;

    cout<<ans<<endl;
    for(int i=0; i<n; i++) if(c[i]==mx) cout<<i+1<<" ";
    cout<<endl;

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