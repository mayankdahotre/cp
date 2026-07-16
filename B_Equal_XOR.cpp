#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,k;
    cin>>n>>k;

    vector<int> v(2*n);
    for(int i=0; i<2*n; i++) cin>>v[i];

    sort(v.begin(), v.begin()+n);
    sort(v.begin()+n, v.end());

    vector<int> l(2*k), r(2*k);
    

    

    set<int>

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