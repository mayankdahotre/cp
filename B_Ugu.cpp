#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n;
    cin>>n;

    string s;
    cin>>s;

    int f=0;
    for(int i=0; i<n-1; i++) if(s[i]!=s[i+1]) f++;

    if(n==1){
        cout<<0<<endl;
        return;
    }

    if(s[0]=='0') cout<<max(0LL,f-1)<<endl;
    else cout<<f<<endl;

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