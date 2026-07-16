// // #include <bits/stdc++.h>
// // using namespace std;

// // void solve() {
// //     int n, m;
// //     cin >> n >> m;

// //     vector<int> x(n);
// //     for (int i = 0; i < n; i++) {
// //         cin >> x[i];
// //     }

// //     vector<int> r(n);
// //     int maxr = 0;
// //     for (int i = 0; i < n; i++) {
// //         cin >> r[i];
// //         maxr = max(maxr, r[i]);
// //     }

// //     set<pair<int, int>> cp;
// //     for (int k = 0; k < n ; k++) {
// //         for (int i = x[k] - r[k]; i <= x[k + 1] + r[k + 1]; i++) {  // Fixed range
// //             int maxr = max(r[k], r[k + 1]);
// //             for (int j = -maxr; j <= maxr; j++) {  // Fixed loop separator (; instead of ,)
// //                 if (((pow(i - x[k], 2) + pow(j, 2) <= pow(r[k], 2)) || 
// //                      (pow(i - x[k + 1], 2) + pow(j, 2) <= pow(r[k + 1], 2)))) {  // Fixed power calculation
// //                     cp.insert({i, j});  // Fixed insert syntax
// //                 }
// //             }
// //         }
// //     }

// //     cout << cp.size() << endl;
// //     return;
// // }

// // int32_t main() {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     cout.tie(NULL);

// //     int T;
// //     cin >> T;
// //     while (T--) {
// //         solve();
// //     }
// //     return 0;
// // }


// // #include <bits/stdc++.h>
// // using namespace std;

// // void solve() {
// //     int n, m;
// //     cin >> n >> m;

// //     vector<int> x(n), r(n);
// //     for (int i = 0; i < n; i++) {
// //         cin >> x[i];
// //     }

// //     for (int i = 0; i < n; i++) {
// //         cin >> r[i];
// //     }

// //     set<pair<int, int>> cp;

// //     for (int k = 0; k < n - 1; k++) {  
// //         int maxr = max(r[k], r[k + 1]);  

// //         for (int i = min((x[k] - r[k]), x[k+1]-r[k+1]); i <= max((x[k + 1] + r[k + 1]),x[k]+r[k]); i++) {
// //             for (int j = -maxr; j <= maxr; j++) {
// //                 if ((pow(i - x[k], 2) + pow(j, 2) <= pow(r[k], 2)) ||
// //                     (pow(i - x[k + 1], 2) + pow(j, 2) <= pow(r[k + 1], 2))) {
// //                     cp.insert({i, j});
// //                 }
// //             }
// //         }
// //     }
// //     cout << cp.size() << endl;
// // }

// // int32_t main() {
// //     ios_base::sync_with_stdio(false);
// //     cin.tie(NULL);
// //     cout.tie(NULL);

// //     int T;
// //     cin >> T;
// //     while (T--) {
// //         solve();
// //     }
// //     return 0;
// // }





// #include <bits/stdc++.h>
// using namespace std;

// # define int long long

// void solve() {
//     int n, m;
//     cin >> n >> m;

//     vector<int> x(n), r(n);
//     for (int i = 0; i < n; i++) cin >> x[i];
//     for (int i = 0; i < n; i++) cin >> r[i];

//     set<pair<int, int>> cp;
//     int sum = 0;

//     // Calculate total points covered by all circles
//     for (int k = 0; k < n; k++) {
//         sum += (2 * r[k] * r[k]) + (2 * r[k]) + 1;
//     }

//     // Check intersection of all pairs of circles
//     for (int k = 0; k < n - 1; k++) {  
//         for (int l = k + 1; l < n; l++) {  
//             if(x[k]-x[l]>r[k]+r[l]) continue;
//             int maxr = max(r[k], r[l]);

//             // Define overlapping x-range
//             int i1 = max(x[k] - r[k], x[l] - r[l]);
//             int i2 = min(x[k] + r[k], x[l] + r[l]);

//             // Iterate through overlapping area
//             for (int i = i1; i <= i2; i++) {
//                 for (int j = -maxr; j <= maxr; j++) {
//                     bool in_k = ((i - x[k]) * (i - x[k]) + (j * j) <= r[k] * r[k]);
//                     bool in_l = ((i - x[l]) * (i - x[l]) + (j * j) <= r[l] * r[l]);

//                     if (in_k && in_l) {
//                         cp.insert({i, j});
//                     }
//                 }
//             }
//         }
//     }

//     cout << sum - cp.size() << endl;  // Total unique points minus intersection points
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


// #include <bits/stdc++.h>
// using namespace std;

// void solve() {
//     int n, m;
//     cin >> n >> m;

//     vector<int> x(n), r(n);
//     for (int i = 0; i < n; i++) cin >> x[i];
//     for (int i = 0; i < n; i++) cin >> r[i];

//     map<int,int> f;
//     for(int i=0; i<n; i++){
//         for(int j=x[i]-r[i]; i<=x[i]+r[i]; i++){
//             int d = j-x[i];
//             int a = sqrt(r[i]*r[i]-d*d);
//             f[j] = max(f[j],2*a+1);
//         }
//     }

//   int ans = 0;
//     for (auto &[key, value] : f) {
//         ans += value;
//     }

//     cout << ans << endl;
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
    int n, m;
    cin >> n >> m;

    vector<int> x(n), r(n);
    for (int i = 0; i < n; i++) cin >> x[i];
    for (int i = 0; i < n; i++) cin >> r[i];

    map<int, int> f;
    for (int i = 0; i < n; i++) {
        for (int j = x[i] - r[i]; j <= x[i] + r[i]; j++) {  
            int d = j - x[i];
            int a = sqrt(r[i] * r[i] - d * d);
            f[j] = max(f[j], 2 * a + 1);  
        }
    }

    int ans = 0;
    for (auto &p : f) {
        ans += p.second;
    }

    cout << ans << endl;
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
