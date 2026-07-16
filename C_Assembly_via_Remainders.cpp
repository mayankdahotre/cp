#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> x(n-1);
    for(int i=0; i<n-1; i++) cin>>x[i];

    vector<int> a(n);
    a[0] = 10000;

    for(int i=1; i<n; i++){
        a[i] = a[i-1]+x[i-1];
    }

    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
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