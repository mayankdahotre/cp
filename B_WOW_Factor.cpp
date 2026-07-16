#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    string s;
    cin>>s;

    int n = s.length();
    vector<int> pre(n+1,0);

    for(int i=1; i<n; i++){
        if(s[i]=='v' && s[i-1]=='v') pre[i]+=1;
        pre[i]+=pre[i-1];
    }

    int ans=0;
    for(int i=2; i<n-2; i++){
        if(s[i]=='o'){
            ans+=pre[i]*(pre[n-1]-pre[i]);
        }
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