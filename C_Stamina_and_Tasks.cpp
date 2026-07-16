#include <bits/stdc++.h>
using namespace std;

#define int long long

#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

void solve() {
    int n;
    cin >> n;

    vector<double> c(n), p(n);
    for(int i=0; i<n; i++) cin>>c[i]>>p[i]; 

    double ans=0;
    for(int i=n-1; i>=0; i--){
        ans=max(ans, (ans*(1-(p[i]/100.0))+c[i]));
    }

    cout<<fixed<<setprecision(10)<<ans<<endl;
    return;
}

int32_t main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while(T--) {

        solve();
    }

    return 0;
}