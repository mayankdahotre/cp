#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    vector<int> ans(n,0);
    for(int i=1; i<n-1; i++){
        ans[i]=(v[i-1]+v[i+1]-2*v[i])/2;
    }

    int sum = 0;
    for(int i = 1; i < n-1; i++){
        sum += i * ans[i];
    }
    ans[n-1] = (v[0] - sum) / (n-1);

    sum = 0;
    for(int i = 1; i < n-1; i++){
        sum += (n-1-i) * ans[i];
    }
    ans[0] = (v[n-1] - sum) / (n-1);

    // for(int i = 0; i < n; i++) cout << ans[i] << " ";
    // cout << endl;

    for(int i=0; i<n; i++) cout<<ans[i]<<" ";
    cout<<endl;

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