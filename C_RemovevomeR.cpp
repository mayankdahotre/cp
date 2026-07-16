#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int  n;
    cin>>n;

    string s;
    cin>>s;

    s.erase(unique(s.begin(), s.end()), s.end());

    if(s[0]!=s[n-1]){
        if(s.length()==2) cout<<2<<endl;
        else cout<<1<<endl;
    }
    else cout<<1<<endl;

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