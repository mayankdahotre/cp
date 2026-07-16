#include <bits/stdc++.h>
using namespace std;

#define int long long

bool isS(vector<int> &v, int i, int j) {
    for (int k=i; k<j; k++) if(v[k]<=v[k-1]) return false;
    return true;
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i=0; i<n; i++) cin >> v[i];

    int ans = 0;
    for (int i=n-k-1; i<n; i++) v[i]<<=(i-n+k+1);
    for (int i=n-k-1; i>0; i--) {
        if (isS(v,i,i+k)) ans++;
        for (int j=i-1; j<i+k-1; j++) v[j] <<= 1;
    }
    if (isS(v, 0, k)) ans++;
    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}





// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n, k;
//     cin >> n >> k;
//     vector<int> v(n);
//     for (int i = 0; i < n; i++) cin >> v[i];

//     int ans = 0;
//     for (int i = k - 1; i + k < n; i++) {
//         int t = v[i + k];
//         t <<= (k - 1);
//         if (v[i] < t) ans++;
//     }

//     cout << ans << endl;
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
