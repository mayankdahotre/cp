#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int g = v[0];
    for(int i=0; i<n; i++) g = __gcd(g,v[i]);

    if(g!=1){
        cout<<"No"<<endl;
        return;
    }
    else{
        vector<int> ans(n,0);
        int cnt=0;
        for(int i=0; i<n; i++){
            if(v[i]%2){ ans[i]=1; cnt++; }
            else ans[i]=2;
        }
        if(cnt==n) for(int i=0; i<n/2; i++) ans[i]=2;
        cout<<"Yes"<<endl;
        for(int i=0; i<n; i++) cout<<ans[i]<<" ";
        cout<<endl;
        return;
    }
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