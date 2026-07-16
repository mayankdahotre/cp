#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

void solve() {
    int n, k;
    cin>>n>>k;

    vector<int> q(n), r(n);
    for(int i=0; i<n; i++) cin>>q[i];
    for(int i=0; i<n; i++) cin>>r[i];

    sort(q.begin(), q.end(), greater<int>());
    sort(r.begin(), r.end());

    int i=n-1, j=n-1, ans=0;
    while(i>=0 && j>=0){
        // debug(i);
        // debug(j);
        // debug((r[j]+1)*q[i]+r[j]);
        // debug(n);
        if((r[j]+1)*q[i]+r[j]<=k){
            ans++;
            i--;
            j--;
            // debug(i);
            // debug(j);
        }
        else{
            j--;
            // debug(j);
        }
    }

    cout<<ans<<endl;
    // cout<<endl;
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