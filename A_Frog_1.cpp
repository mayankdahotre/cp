// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin >> n;
//     vector<int> h(n);
//     for(int i = 0; i < n; i++) cin >> h[i];

//     vector<int> dp(n, LLONG_MAX);
//     dp[0] = 0; // cost to reach first stone is 0

//     for(int i = 0; i < n; i++) {
//         if(i + 1 < n) dp[i + 1] = min(dp[i + 1], dp[i] + abs(h[i + 1] - h[i]));
//         if(i + 2 < n) dp[i + 2] = min(dp[i + 2], dp[i] + abs(h[i + 2] - h[i]));
//     }

//     cout << dp[n - 1] << endl;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     solve();
//     return 0;
// }







// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> h(n);
//     for(int i=0; i<n; i++) cin>>h[i];

//     vector<int> dp(n, LLONG_MAX);

//     dp[0]=0;
//     for(int i=0; i<n; i++){
//         if(i+1<n) dp[i+1]=min(dp[i]+abs(h[i+1]-h[i]),dp[i+1]);
//         if(i+2<n) dp[i+2]=min(dp[i]+abs(h[i+2]-h[i]),dp[i+2]);
//     }

//     cout<<dp[n-1]<<endl;
//     return;
// }

// int32_t main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);

//     solve();
//     return 0;
// }




#include <bits/stdc++.h>
using namespace std;

#define int long long

int f(int i, vector<int> &h, vector<int> &dp) {
    if(i == 0) return 0;

    if(dp[i] != -1) return dp[i];

    int cost1 = f(i-1, h, dp) + abs(h[i] - h[i-1]);

    int cost2 = LLONG_MAX;
    if(i > 1) {
        cost2 = f(i-2, h, dp) + abs(h[i] - h[i-2]);
    }

    return dp[i] = min(cost1, cost2);
}

void solve() {
    int n;
    cin >> n;

    vector<int> h(n);
    for(int i = 0; i < n; i++) cin >> h[i];

    vector<int> dp(n, -1);

    cout << f(n-1, h, dp) << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}