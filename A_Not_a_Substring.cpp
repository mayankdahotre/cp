#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

void solve() {
    string s;
    cin>>s;

    int n = s.length();

    if(s=="()" || s=="(" || s==")"){
        cout<<"NO"<<endl;
        return;
    }

    bool b=0;
    for(int i=0; i<n; i++) if(s[i]==s[i+1]) b=1;

    string ans;
    if(b) for(int i=0; i<n; i++) ans+="()";
    else ans=string(n,'(')+string(n,')');

    cout<<"YES"<<endl;
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