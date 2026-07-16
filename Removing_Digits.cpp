// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     vector<int> dp(n + 1, INT_MAX);
//     dp[0] = 0;  // 0 steps to reduce 0 to 0

//     for (int i = 1; i <= n; i++) {
//         int temp = i;
//         while (temp > 0) {
//             int digit = temp % 10;
//             if (digit > 0) {
//                 dp[i] = min(dp[i], 1 + dp[i - digit]);
//             }
//             temp /= 10;
//         }
//     }

//     cout << dp[n] << endl;

//     return 0;
// }





#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> dp(n+1,INT_MAX);
    dp[0]=0;
    
    for(int i=1; i<=n; i++){
        int t = i;
        while(t){
            int d = t%10;
            if(d>0) dp[i] = min(dp[i], 1+dp[i-d]);

            t/=10;
        }
    }

    cout<<dp[n]<<endl;
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}