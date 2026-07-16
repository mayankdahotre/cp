// #include <bits/stdc++.h>
// using namespace std;

// #define int long long

// int mod = 998244353;

// int mod_pow(int base, int exp, int mod) {
//     int result = 1;
//     base = base % mod;
//     while (exp > 0) {
//         if (exp % 2 == 1)
//             result = (result * base) % mod;
//         exp = exp >> 1;
//         base = (base * base) % mod;
//     }
//     return result;
// }

// void solve() {
//     int n;
//     cin>>n;

//     vector<int> p(n);
//     vector<int> q(n);

//     for(int i=0; i<n; i++) cin>>p[i];
//     for(int i=0; i<n; i++) cin>>q[i];

//     vector<int> r(n,0);
//     for(int i=0; i<n; i++){
//         int maxn = 0LL;
//         for(int j=0; j<=i; j++){
//             maxn = max(maxn, (mod_pow(2,p[j],mod) + mod_pow(2,q[i-j],mod)%mod));
//         }
//         r[i]=maxn;
//     }

//     for(int i=0; i<n; i++) cout<<r[i]<<" ";
//     cout<<endl;
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

const int MOD = 998244353;

int mod_pow(int base, int exp, int mod) {
    int result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

void solve() {
    int n;
    cin >> n;

    vector<int> p(n), q(n);
    for (int i = 0; i < n; i++) cin >> p[i];
    for (int i = 0; i < n; i++) cin >> q[i];

    // Precompute powers of 2 for all p[i] and q[i]
    unordered_map<int, int> pow2;
    for (int i = 0; i < n; i++) {
        if (pow2.find(p[i]) == pow2.end())
            pow2[p[i]] = mod_pow(2, p[i], MOD);
        if (pow2.find(q[i]) == pow2.end())
            pow2[q[i]] = mod_pow(2, q[i], MOD);
    }

    vector<int> r(n, 0);
    for (int i = 0; i < n; i++) {
        int maxn = 0;
        for (int j = 0; j <= i; j++) {
            int val = (pow2[p[j]] + pow2[q[i - j]]) % MOD;
            maxn = max(maxn, val);
        }
        r[i] = maxn;
    }

    for (int i = 0; i < n; i++) cout << r[i] << " ";
    cout << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
