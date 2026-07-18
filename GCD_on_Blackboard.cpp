#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    if(n==1) {
        cout<<v[0]<<endl;
        return;
    }

    vector<int> pre(n+1,0), suf(n+1,0);
    for(int i=0; i<n; i++) pre[i+1]=__gcd(pre[i], v[i]);
    for(int i=n-1; i>=0; i--) suf[i]=__gcd(suf[i+1], v[i]);

    int ans=0;
    for(int i=0; i<n; i++){
        ans=max(ans, __gcd(pre[i], suf[i+1]));
    }

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