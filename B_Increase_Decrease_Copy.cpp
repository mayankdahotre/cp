#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    vector<int> b(n+1);
    for(int i=0; i<n+1; i++) cin>>b[i];

    int e=b[n];

    bool bw=false;
    for(int i=0; i<n; i++) if((a[i]<=e && e<=b[i]) || (b[i]<=e && e<=a[i])) { bw=true; break; }

    int ans=1;
    for(int i=0; i<n; i++) ans+=abs(a[i]-b[i]);

    if(!bw){
        int d=INT_MAX;
        for(int i=0; i<n; i++){
            d=min(d, abs(a[i]-e));
            d=min(d, abs(b[i]-e));
        }
        ans+=d;
    }

    cout<<ans<<endl;
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