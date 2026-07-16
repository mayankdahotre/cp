// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) v[i]=i+1;

//     int ans = 0;
//     for(int i=0; i<n; i++){
//         reverse(v.begin()+i, v.end());
//         int mx = 0;
//         int sum = 0;
//         for(int j=0; j<n; j++){
//             mx = max(mx, (j+i)*v[j]);
//             sum+=v[j]*(j+1);
//         }
//         sum-=mx;
//         ans = max(sum, ans);
//         reverse(v.begin()+i, v.end());
//     }

//     cout<<ans<<endl;
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
    int n;
    cin >> n;

    int ans = 0;

    // try all pairs (i,j) to swap in base permutation [1..n]
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            vector<int> v(n);
            for(int k=0; k<n; k++) v[k] = k+1;

            swap(v[i], v[j]);

            int sum = 0, mx = 0;
            for(int k=0; k<n; k++){
                sum += v[k] * (k+1);
                mx = max(mx, v[k] * (k+1));
            }
            ans = max(ans, sum - mx);
        }
    }

    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while(T--) solve();
    return 0;
}