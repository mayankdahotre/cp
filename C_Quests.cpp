#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, k;
    cin>>n>>k;;

    vector<int> a(n), b(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];

    for(int i=1; i<n; i++) b[i]=max(b[i], b[i-1]);

    int ans=0;
    int temp = 0;
    int idx = min(k,n);
    for(int i=0; i<idx; i++){
        temp+=a[i];
        temp+=(k-1-i)*b[i];
        ans = max(temp, ans);
        temp-=(k-1-i)*b[i];
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