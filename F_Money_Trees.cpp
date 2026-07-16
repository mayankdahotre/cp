#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

void solve() {
    int n,k;
    cin>>n>>k;

    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    vector<int> h(n);
    for(int i=0; i<n; i++) cin>>h[i];

    vector<int> pre(n,0);
    pre[0]=a[0];
    for(int i=1; i<n; i++) pre[i]+=pre[i-1];

    vector<int> dsuf(n-1,0);
    for(int i=0; i<n-1; i++) if(h[i]%h[i+1]==0) dsuf[i]=1;

    int c=0;
    int val=h[n-2];
    for(int i=n-3; i>=0; i--){
        if(h[i] && val){
            c++;
            dsuf[i]=c;
            val=h[i];
        }
        else if(h[i]){
            c=1;
            val=h[i];
        }
        else{
            c=0;
            val=h[i];
        }
    }
    
    int ans=0;
    for(int i=0; i<n-2; i++){
        int m = *lower_bound(a.begin()+i, a.begin()+dsuf[i]-1, k);
        ans=max(ans, m);
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