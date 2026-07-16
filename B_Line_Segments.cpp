#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

void solve() {
    int n;
    cin>>n;

    int px,py,qx,qy;
    cin>>px>>py>>qx>>qy;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end());

    double d=sqrt((px-qx)*(px-qx)+(py-qy)*(py-qy));

    int sum=0;
    for(int i=0; i<n; i++) sum+=v[i];

    if(d>sum){
        cout<<"NO"<<endl;
        return;
    }

    int mx=0;
    for(int i=0; i<n; i++) mx=max(mx, v[i]);

    if(d<max(0LL,2*mx-sum)){
        cout<<"NO"<<endl;
        return;
    }

    cout<<"YES"<<endl;
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