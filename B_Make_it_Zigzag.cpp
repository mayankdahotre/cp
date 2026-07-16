#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    vector<int> pmx(n,-1);
    pmx[0]=v[0];

    for(int i=1; i<n; i++) pmx[i]=max(v[i], pmx[i-1]);

    for(int i=1; i<n; i+=2) v[i]=pmx[i];

    // for(int i=0; i<n; i++) cout<<v[i]<<" ";
    // cout<<endl;

    int ans=0;
    // for(int i=0; i<n; i+=2) if(v[i]>=v[i+1]) ans+=v[i+1]-v[i]+1;
    for(int i=1; i<n-1; i+=2){
        if(v[i]<=v[i+1]){
            ans+=v[i+1]-v[i]+1; 
            // cout<<ans<<" ";
        }
    }
    // cout<<endl;

    if(v[0]==v[1]) ans++;

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