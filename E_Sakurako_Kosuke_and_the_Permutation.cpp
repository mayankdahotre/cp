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

    vector<int> v(n+1);
    for(int i=1; i<=n; i++) cin>>v[i];

    int ans=0;
    vector<int> vis(n+1,0);
    for(int i=1; i<=n; i++){
        if(vis[i]) continue;
        else{
            int c=0, x=i;
            while(!vis[x]){
                vis[x]=1;
                x=v[x];
                c++;
            }

            ans+=(c-1)/2;
        }
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