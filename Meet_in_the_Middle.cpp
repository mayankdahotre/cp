#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n,x;
    cin>>n>>x;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    
    sort(v.begin(), v.end());

    int t = (1<<n)-1;

    int ans=0;

    for(int m=0; m<=t; m++){
        int sum=0;
        for(int j=0; j<n; j++){
            if((1<<j)&m) sum+=v[j];
        }

        if(sum==x) ans++;
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