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

    string s;
    cin>>s;

    int l=-1, r=-1;
    for(int i=0; i<n; i++){
        if(s[i]=='L'){
            l=i;
            break;
        }
    }

    for(int i=n-1; i>=0; i--){
        if(s[i]=='R'){
            r=i;
            break;
        }
    }

    vector<int> pre(n+1,0);
    for(int i=1; i<=n; i++) pre[i]+=pre[i-1]+v[i-1];

    int ans=0;
    while (true) {
        while (l < n && s[l] != 'L') l++;
        while (r >= 0 && s[r] != 'R') r--;

        if (l >= r) break;

        ans += pre[r + 1] - pre[l];

        l++;
        r--;
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