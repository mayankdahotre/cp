#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, q;
    cin >> n >> q;

    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    vector<int> l(q), r(q);
    for(int i = 0; i < q; i++) cin >> l[i] >> r[i];

    // Step 1: suffix max
    vector<int> suf(n);
    suf[n-1] = max(a[n-1], b[n-1]);

    for(int i = n-2; i >= 0; i--){
        suf[i] = max({a[i], b[i], suf[i+1]});
    }

    // Step 2: prefix sum
    vector<int> pref(n);
    pref[0] = suf[0];
    for(int i = 1; i < n; i++){
        pref[i] = pref[i-1] + suf[i];
    }

    // Step 3: queries
    for(int i = 0; i < q; i++){
        int L = l[i] - 1;
        int R = r[i] - 1;

        if(L == 0) cout << pref[R] << " ";
        else cout << pref[R] - pref[L-1] << " ";
    }
    cout << "\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}