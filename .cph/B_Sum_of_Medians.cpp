#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n*k);
    for(int i=0; i<n*k; i++) cin>>v[i];

    sort(v.begin(), v.end());

    int sum = 0;
    for(int i=n/2-1; i<=n*k; i+=n){
        sum+=v[i];
    }

    cout<<sum<<endl;
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