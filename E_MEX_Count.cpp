#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end());

    vector<int> ans(n+1,0);
    ans[n]=1;
    ans[0]=1;

    map<int,int> mp;
    for(int i=0; i<n; i++) mp[v[i]]++;

    if(!mp.count(0) || v[0]==v[n-1]){
        for(int i=0; i<n; i++) ans[i]=1;

        for(int i=0; i<=n; i++) cout<<ans[i]<<" ";
        cout<<endl;

        return;
    }

    int mex=0;
    for(int i=0; i<n; i++){
        if(v[i]==mex) mex++;
        if(v[i]>mex) break;
    }

    vector<int> f(v[n-1]+1,0);
    for(int i=0; i<n; i++) f[v[i]]++;

    vector<int> suf(v[n-1]+1);
    suf.back()=f.back();

    for(int i=f.size()-2; i>=0; i--) suf[i]+=suf[i-1]+f[i];

    for(int k=1; k<n; k++){
        for(int i=0; i<mex; i++){
            int exf=suf[i+1];
            if(k>f[i] && exf-f[i]>=k) ans[k]++;
        }
    }

    for(int i=0; i<=n; i++) cout<<ans[i]<<" ";
    cout<<endl;
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