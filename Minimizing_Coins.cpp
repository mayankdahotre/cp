// #include <bits/stdc++.h>
// using namespace std;

// const int INF = 1e9;  // Large value representing "infinity"

// int32_t main() {
//     int n, x;
//     cin >> n >> x;
    
//     vector<int> coins(n);
//     for (int i = 0; i < n; i++) {
//         cin >> coins[i];
//     }

//     vector<int> dp(x + 1, INF);  // Initialize dp array with a large value
//     dp[0] = 0;  // Base case: 0 coins needed to make sum 0

//     // Compute the minimum number of coins for each sum up to x
//     for (int i = 1; i <= x; i++) {
//         for (int c : coins) {
//             if (i - c >= 0) {  // Only update if valid
//                 dp[i] = min(dp[i], dp[i - c] + 1);
//             }
//         }
//     }

//     cout << (dp[x] == INF ? -1 : dp[x]) << endl;  // Print result

//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,x;
    cin>>n>>x;

    vector<int> c(n);
    for(int i=0; i<n; i++) cin>>c[i];

    sort(c.begin(), c.end(), greater<int>());

    vector<int> dp(x+1,INT_MAX);
    dp[0]=0;

    for(int i=1; i<=x; i++){
        for(int j=0; j<n; j++){
            if(i>=c[j]) dp[i] = min(dp[i-c[j]]+1, dp[i]);
        }
    }

    cout<<dp[x]<<endl;
    return;

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}