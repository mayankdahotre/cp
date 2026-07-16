#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

void solve() {
    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    int o=0, z=0;
    for(int i=0; i<n; i++) if(s[i]-'0') o++;
    z=n-o;

    // debug(o);
    // debug(z);

    if(o<=k){
        cout<<"Alice"<<endl;
        return;
    }

    if(k>=(n/2+1)){
        cout<<"Alice"<<endl;
        return;
    }

    cout<<"Bob"<<endl;
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