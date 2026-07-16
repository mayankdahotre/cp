#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    reverse(v.begin(), v.end());

    int sum=0;
    int ans=0;
    for(int i=0; i<n; i++){
        if(sum==0 && v[i]==0) ans++;
        if(v[i]){
            sum+=v[i];
            if(sum==0) ans++;
        }
        if(sum && v[i]==0){
            ans++;
            sum=0;
        }
    }
    // if(sum) ans--;

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