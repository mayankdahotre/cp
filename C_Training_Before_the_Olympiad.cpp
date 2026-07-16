#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    vector<int> ans(n,0);
    ans[0]=v[0];
    int o=v[0]%2;
    int u=0;
    int sum=v[0];
    for(int i=1; i<n; i++){
        if(v[i]%2) o++;
        if(o%3==1) ans[i]--;
        ans[i]-=o/3;
        sum+=v[i];
        ans[i]+=sum;
    }

    for(int i=0; i<n; i++) cout<<ans[i]<<" ";
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