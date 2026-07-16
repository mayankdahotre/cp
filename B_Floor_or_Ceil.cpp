// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int x, n, m;
//     cin >> x >> n >> m;

//     int x1 = x, x2 = x;
    
//     for (int i = 0; i < n && x1 > 0; i++) x1 /= 2;
//     for (int i = 0; i < m && x1 > 0; i++) x1 = (x1 + 1) / 2;

//     for (int i = 0; i < m && x2 > 0; i++) x2 = (x2 + 1) / 2;
//     for (int i = 0; i < n && x2 > 0; i++) x2 /= 2;

//     cout << x1 << " " << x2 << endl;
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


#include <iostream>
using namespace std;

void solve_case(long long x, long long n, long long m) {
    long long min_x = x, max_x = x;
    
    for (long long i = 0; i < n; ++i) {
        max_x = max_x / 2;
    }
    
    for (long long i = 0; i < m; ++i) {
        max_x = (max_x + 1) / 2;
    }
    
    for (long long i = 0; i < m; ++i) {
        min_x = (min_x + 1) / 2;
    }
    
    for (long long i = 0; i < n; ++i) {
        min_x = min_x / 2;
    }
    
    cout << min_x << " " << max_x << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        long long x, n, m;
        cin >> x >> n >> m;
        solve_case(x, n, m);
    }
    
    return 0;
}