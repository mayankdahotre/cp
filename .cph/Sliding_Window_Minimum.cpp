#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, k;
    cin >> n >> k;
    int x, a, b, c;
    cin >> x >> a >> b >> c;

    vector<int> v(n);
    v[0] = x;

    for (int i = 1; i < n; i++) {
        v[i] = (a * v[i - 1] + b) % c;
    }

    int xors=0;
    for(int i=0; i<=n-k; i++){
        int minn=LLONG_MAX;
        for(int j=0; j<k; j++){
            minn=min(minn,v[i+j]);
        }
        xors^=minn;
    }

    cout<<xors<<endl;
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
