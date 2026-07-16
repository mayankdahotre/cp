// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n, k;
//     cin >> n >> k;

//     if (n % 2 == 0) {
//         cout << -1 << endl;
//         return;
//     }

//     if (n + 1 == 2 * k) {
//         int m = -1;
//         for (int i = 3; i <= n; i += 2) {  
//             if (n % i == 0) {
//                 m = i;
//                 break;
//             }
//         }

//         cout << n/m << endl;
//         for (int i = 1; i <= n; i += m) {
//             cout << i << " ";
//         }
//         cout << endl;
//         return;
//     }

//     cout << -1 << endl;
//     return;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int T;
//     cin >> T;
//     while (T--) {
//         solve();
//     }

//     return 0;
// }





#include <bits/stdc++.h>
using namespace std;
 
/*
    Problem B: Medians
    Editorial code by AkiLotus
*/
 
namespace solution {
    bool hasMultipleTests = true;
 
    int n, k;
 
    void preprocess() {
 
    }
 
    void input(int testcase) {
        cin >> n >> k;
    }
 
    void solve(int testcase) {
        if (n == 1) {cout << "1\n1\n"; return;}
 
        if (k == 1 || k == n) {cout << "-1\n"; return;}
 
        int p2 = k - k % 2;
        int p3 = k + 1 + k % 2;
        cout << "3\n1 " << p2 << " " << p3 << endl;
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    solution::preprocess();
 
    int t = 1;
    if (solution::hasMultipleTests) cin >> t;
 
    for (int testcase=1; testcase<=t; testcase++) {
        solution::input(testcase);
        solution::solve(testcase);
    }
 
    return 0;
}
