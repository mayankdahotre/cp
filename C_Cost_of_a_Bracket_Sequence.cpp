#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n, k;
    cin>>n>>k;

    string s;
    cin>>s;

    set<int> occ;
    occ.insert(0);

    string ans = string(n,'0');

    int x=0;
    for(int i=0; i<n; i++){
        if(k==0) break;

        int m=x;

        if(s[i]=='(') m++;
        else m--;

        if(occ.find(m)!=occ.end()){
            ans[i]='1';
            k--;
        }
        else occ.insert(m);
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