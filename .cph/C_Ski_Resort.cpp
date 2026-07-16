// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// int helper(int n, int k){
//     if(k>n) return 0;
//     else{
//         return (n-k+1)*(n-k+2)/2;
//     }
// }

// void solve() {
//     int n,k,q;
//     cin>>n>>k>>q;

//     vector<int> v(n);
//     for(int i=0; i<n; i++) cin>>v[i];

//     int i=-1, j=-1, p=0, sum=0;
//     while(p<n){
//         if(v[p]<=q){
//             if(j-i==0) i=p;
//             j=p;
//         }
//         else{
//             sum+=helper(j-i+1,k);
//             i=-1;
//             j=-1;
//         }
//         p++;
//     }
//     sum+=helper(j-i+1,k);

//     cout<<sum<<endl;
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

int helper(int len, int k) {
    if (len < k) return 0;
    return (len - k + 1) * (len - k + 2) / 2;
}

void solve() {
    int n, k, q;
    cin >> n >> k >> q;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int sum = 0;
    int len = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] <= q) {
            len++;
        } else {
            sum += helper(len, k);
            len = 0;
        }
    }
    sum += helper(len, k); // for the last segment if needed

    cout << sum << '\n';
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
