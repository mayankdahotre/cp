#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    string s;
    cin>>s;

    int n = s.length();

    int n0 = 0;
    for(int i=0; i<n; i++) if(s[i]=='0') n0++;

    if(n0==0){
        cout<<n-1<<endl;
        return;
    }

    int fnz=-1;
    for(int i=n-1; i>=0; i--){
        if(s[i]!='0'){
            fnz=i;
            break;
        }
    }

    int ans = n-1-fnz;
    for(int i=0; i<fnz; i++){
        if(s[i]!='0') ans++;
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