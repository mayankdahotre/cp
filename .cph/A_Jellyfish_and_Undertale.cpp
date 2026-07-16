#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int a,b,n;
    cin>>a>>b>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int sum=b;
    for(int i=0; i<n; i++) sum+=min(a-1,v[i]);

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