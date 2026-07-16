#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

int mod = 998244353;

int fact(int n){
    if(n<=1) return 1;
    return n*fact(n-1)%mod;
}

void solve() {
    int n;
    cin>>n;

    int x;
    cin>>x;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.rbegin(), v.rend());

    int mxi=0;
    for(int i=0; i<n; i++){
        if(v[i]!=v[i+1]){
            mxi=i;
            break;
        }
    }

    int sum=0;
    for(int i=mxi+1; i<n; i++) sum+=v[0]-1-v[i];

    if(sum>x){
        cout<<0<<endl;
        return;
    }

    int ans=(1+min(n-1-mxi,x-sum))%mod;
    ans*=fact(n-1-mxi)%mod;

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