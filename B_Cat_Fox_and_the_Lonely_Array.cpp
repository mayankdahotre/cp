#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    debugv(v);

    if(n==1){
        cout<<1<<endl;
        return;
    }

    // debugv(v);

    int ans=n;
    for(int k=n-1; k>=1; k++){
        int x = 0;
        for(int i=0; i<k; i++) x|=v[i];

        for(int i=1; i<n-k+1; i++){
            int y=0;
            for(int j=0; j<k; j++) y|=v[i+j];

            if(x!=y){
                cout<<ans<<endl;
                return;
            }
        }

        ans=k;
    }

    cout<<1<<endl;
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