// // #include <bits/stdc++.h>
// // using namespace std;

// // #define int long long

// // void solve() {
// //     int n;
// //     cin>>n;

// //     vector<int> div;
// //     for(int i=1; i<=sqrt(n); i++){
// //         if(n%i==0){
// //             div.push_back(i);
// //             if(n/i!=i) div.push_back(n/i);
// //         }
// //     }

// //     int prev = div[0];
// //     int m = div.size();
// //     int maxn = 0;
// //     int ans=1;
// //     for(int i=0; i<m; i++){
// //         if(div[i+1]==div[i]+1) ans++;
// //         else{
// //             maxn = max(maxn,ans);
// //             ans=1;
// //         }
// //     }

// //     cout<<maxn<<endl;
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



// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin >> n;

//     vector<int> div;
//     for (int i = 1; i * i <= n; i++) {
//         if (n % i == 0) {
//             div.push_back(i);
//             // if (n / i != i) div.push_back(n / i);
//         }
//     }

//     sort(div.begin(), div.end());

//     int ans = 1;
//     int maxn = 1;

//     for (int i = 1; i < div.size(); i++) {
//         if (div[i] == div[i - 1] + 1) {
//             ans++;
//         } else {
//             maxn = max(maxn, ans);
//             ans = 1;
//         }
//     }

//     maxn = max(maxn, ans);
//     cout << maxn << endl;
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
    int n;
    cin>>n;

    if(n%2){
        cout<<1<<endl;
        return;
    }

    int ans=0,maxn=1;
    for(int i=1; i<=n; i++){
        if(n%i==0) ans++;
        else{
            maxn = max(maxn,ans);
            ans=1;
            break;
        }
    }
    maxn = max(maxn,ans);

    cout<<maxn<<endl;
    return;
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