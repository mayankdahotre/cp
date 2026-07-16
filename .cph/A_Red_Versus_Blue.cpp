#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,r,b;
    cin>>n>>r>>b;

    int m = max(r/(b+1),r/b);

    string s1;
    for(int i=0; i<m; i++){
        s1+='R';
    }
    s1+='B';

    string ans;
    for(int i=0; i<b; i++){
        ans+=s1;
    }
    for(int i=0; i<n-r-b; i++){
        ans+='R';
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