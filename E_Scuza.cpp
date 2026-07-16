// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n,q;
//     cin>>n>>q;

//     vector<int> a(n), b(q);
//     for(int i=0; i<n; i++) cin>>a[i];

//     for(int i=0; i<q; i++) cin>>b[i];

//     vector<int> ans(q,0);
//     for(int i=0; i<q; i++){
//         for(int j=0; j<n; j++){
//             if(a[j]<=b[i]) ans[i]+=a[j];
//             else break;
//         }
//     }

//     for(int i=0; i<q; i++) cout<<ans[i]<<" ";
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
    int n, q;
    cin >> n >> q;

    vector<int> a(n), b(q);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < q; i++) cin >> b[i];

    vector<int> ps(n + 1, 0);
    for (int i = 0; i < n; i++)
        ps[i + 1] = ps[i] + a[i];

    vector<int> pm(n + 1, 0);
    for (int i = 0; i < n; i++)
        pm[i + 1] = max(pm[i], a[i]);

    for (int i = 0; i < q; i++) {
        int k = b[i];
        int idx = upper_bound(pm.begin(), pm.end(), k) - pm.begin() - 1;
        cout << ps[idx] << " ";
    }
    cout<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}