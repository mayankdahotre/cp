// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n, k;
//     cin >> n >> k;

//     if(k >= n){
//         cout << 1 << endl;
//         return;
//     }

//     int sq = sqrt(n);

//     for(int i = min(sq, k); i >= 1; i--){
//         if(n % i == 0){
//             int d = n / i;
//             if(d <= k){
//                 cout << i << endl;
//                 return;
//             }
//             if(i <= k){
//                 cout << n / i << endl;
//                 return;
//             }
//         }
//     }
// }

// int32_t main() {
//     ios::sync_with_stdio(false);
//     cin.tie(NULL);

//     int T;
//     cin >> T;
//     while(T--) solve();
// }




#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, k;
    cin >> n >> k;

    int ans = n;
    
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            int d1 = i;
            int d2 = n / i;

            if(d1 <= k) ans = min(ans, n / d1);
            if(d2 <= k) ans = min(ans, n / d2);
        }
    }

    cout << ans << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--) solve();
}