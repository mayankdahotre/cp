#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

void solve() {
    string s;
    cin>>s;

    int n = s.length();

    int cu=0, cs=0;
    for(int i=0; i<n; i++) if(s[i]=='s') cs++;
    
    cu=n-cs;

    int ans=0;

    if(s[0]=='u'){
        ans++;
        s[0]='s';
    }

    if(s[n-1]=='u'){
        ans++;
        s[n-1]='s';
    }
    for(int i=1; i<n-1; i++){
        if(s[i]=='u' && s[i+1]=='u'){
            s[i+1]='s';
            ans++;
        }
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