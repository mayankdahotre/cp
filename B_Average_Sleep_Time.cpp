#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    double sum = 0;

    for (int i = 0; i < n; i++) {
        sum += min({i + 1, k, n - k + 1, n - i}) * v[i];
    }

    // number of subarrays of size k
    sum /= (n - k + 1);

    cout << fixed << setprecision(10) << sum << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}


// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n, k;
//     cin >> n >> k;

//     vector<int> a(n);
//     for (int i = 0; i < n; i++) cin >> a[i];

//     double total = 0;

//     // first window
//     int window_sum = 0;
//     for (int i = 0; i < k; i++) window_sum += a[i];

//     total += window_sum;

//     // slide window
//     for (int i = k; i < n; i++) {
//         window_sum += a[i];
//         window_sum -= a[i - k];
//         total += window_sum;
//     }

//     cout << fixed << setprecision(10) 
//          << total / (n - k + 1) << endl;
// }