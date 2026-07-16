// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n, m;
//     cin >> n >> m;

//     vector<int> a(n);
//     for (int i = 0; i < n; i++) cin >> a[i];

//     vector<int> b(m);
//     for (int i = 0; i < m; i++) cin >> b[i];

//     sort(a.begin(), a.end());
//     sort(b.begin(), b.end());

//     if (n <= m) {
//         int sum = 0;
//         for (int i = m - 1; i >= m - n; i--) sum += b[i];
//         cout << sum << endl;
//         return;
//     } else {
//         int sum = 0;
//         for (int i = 0; i < m; i++) sum += b[i];
//         for (int i = n - 1; i > n - m; i--) sum += a[i]; 
//         cout << sum << endl;
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

void solve() {
    int n,m;
    cin>>n>>m;

    vector<int> a(n+m);
    for(int i=0; i<n+m; i++) cin>>a[i];

    sort(a.begin(), a.end()-1);
    reverse(a.begin(), a.end());

    int ans = 0;
    for(int i=0; i<n; i++) ans+=a[i];

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