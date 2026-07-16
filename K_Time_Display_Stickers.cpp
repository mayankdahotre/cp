#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

void solve() {
    string s;
    cin>>s;

    int n = s.length();
    vector<int> f(10,0);
    for(int i=0; i<n; i++) f[s[i]-'0']++;

    int a=0, b=0, c=0;
    // for(int i=0; i<1; i++) a+=f[i];
    for(int i=0; i<6; i++) b+=f[i];
    for(int i=0; i<10; i++) c+=f[i];

    int ans=0;
    ans+=max(0LL,f[0]*(b-1)*(c-2)*(c-3));
    ans+=max(0LL,f[1]*(f[1]+f[0]-1)*(c-2)*(c-3));

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