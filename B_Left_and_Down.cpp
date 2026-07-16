#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int a,b,k;
    cin>>a>>b>>k;

    int ans = 0;
    if(k>=max(a,b)) ans=1;
    else{
        int g = __gcd(a,b);
        if(a/g<=k && b/g<=k) ans=1;
        else ans=2;
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