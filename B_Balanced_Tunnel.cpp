#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> a(n), b(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];

    vector<int> v(n);
    // for(int i=0; i<n; i++){
    //     v[i] = find(b.begin(), b.end(), a[i])-b.begin()+1;
    // }

    map<int,int> pos;
    for(int i=0; i<n; i++) pos[b[i]]=i;
    for(int i=0; i<n; i++) v[i]=pos[a[i]]+1;

    int ans=0;
    int mx = v[0];
    for(int i=0; i<n; i++){
        if(v[i]<mx) ans++;
        mx=max(mx,v[i]);
    }

    cout<<ans<<endl;
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}