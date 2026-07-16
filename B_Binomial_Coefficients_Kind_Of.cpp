// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// int N = 1e9+7;

// int C(int n, int k){
//     vector<int> v(n);
//     for(int i=0; i<n; i++){
//         vector<int> prev;
//         for(int j=0; j<=i; j++){
//             prev.push_back(v[j]+prev[prev.size()-1]);
//         }
//         v = prev;
//     }

//     return v[k];
// }

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> a(n), b(n);
//     for(int i=0; i<n; i++) cin>>a[i];
//     for(int i=0; i<n; i++) cin>>b[i];

//     for(int i=0; i<n; i++) cout<<C(a[i],b[i])<<endl;

//     return;
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

// const int N = 1e9+7;

// // vector<vector<int>> dp(100001, vector<int>(100001,-1));

// int C(int n, int k){
//     if(k<0 || k>n) return 0;

//     if(k==0 || k==n) return 1;

//     // if(dp[n][k]!=-1) return dp[n][k];

//     // return dp[n][k] = (C(n,k-1) + C(n-1,k-1))%N;

//     vector<int> v(n);
//     for
// }

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> a(n), b(n);

//     for(int i=0; i<n; i++) cin>>a[i];
//     for(int i=0; i<n; i++) cin>>b[i];

//     for(int i=0; i<n; i++)cout<<C(a[i], b[i])<<endl;

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

const int MOD = 1e9 + 7;

int C(int n, int k){
    vector<int> v(1, 1);

    for(int i = 1; i <= n; i++){
        vector<int> cur(i + 1, 1);

        for(int j = 1; j < i; j++){
            cur[j] = (cur[j-1] + v[j-1]) % MOD;
        }

        v = cur;
    }

    return v[k];
}

void solve() {
    int t;
    cin >> t;

    vector<int> a(t), b(t);

    for(int i = 0; i < t; i++) cin >> a[i];
    for(int i = 0; i < t; i++) cin >> b[i];

    for(int i = 0; i < t; i++){
        cout << C(a[i], b[i]) << endl;
    }
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}