// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n,m,k;
//     cin>>n>>m>>k;

//     int x = k/n;
//     if(k%n) x++;
//     if(m-x>=1){
//         if(m-x>=x){
//             cout<<1<<endl;
//             return;
//         }
//         else if(m-x<x){
//             cout<<(x/(m-x+1))<<endl;
//             return;
//         }
//         else if(x==m){
//             cout<<m<<endl;
//             return;
//         }

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
//         // cout<<T<<endl;
//         // cout<<endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    int x = (k + n - 1) / n; // Equivalent to ceil(k/n)
    
    if (m >= x) {
        cout << 1 << endl;  // If we have enough moves, we can do it in 1 step.
    } 
    else {
        int remaining = x - m; // Remaining moves required after using all available `m`
        cout << (remaining + m - 1) / m + 1 << endl; // Steps required to complete the task
    }
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
