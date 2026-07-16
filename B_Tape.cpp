#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,l,k;
    cin>>n>>l>>k;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    vector<int> d;
    for(int i=1; i<n; i++) d.push_back(v[i]-v[i-1]);

    sort(d.begin(), d.end());

    int ans=0;
    int r=n-k;
    while(r--){
        ans+=d[r];
    }
    ans+=k;

    cout<<ans<<endl;
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}