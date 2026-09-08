#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cerr << #x << " = " << (x) << endl;
#define debug2(a, b) cerr << #a << "=" << (a) << " | " << #b << "=" << (b) << endl;
#define debug3(a, b, c) cerr << #a << "=" << (a) << " | " << #b << "=" << (b) << " | " << #c << "=" << (c) << endl;
#define debugp(p) cerr << #p << " = {" << (p).first << ", " << (p).second << "}" << endl;
#define debugv(v) { cerr << #v << " = [ "; for(auto &it : v) cerr << it << ' '; cerr << "]" << endl; }
#define debugvp(v) { cerr << #v << " = [ "; for(auto &p : v) cerr << "{" << p.first << "," << p.second << "} "; cerr << "]" << endl; }
#define debugvv(v) { cerr << #v << " = \n"; for(auto &r : v){ cerr << "  [ "; for(auto &x : r) cerr << x << ' '; cerr << "]\n"; } }
#define debugm(m) { cerr << #m << " = {\n"; for(auto &p : m) cerr << "  " << p.first << " -> " << p.second << "\n"; cerr << "}" << endl; }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n,q;
    cin>>n>>q;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    vector<int> pre(n+1,0);
    for(int i=1; i<=n; i++) pre[i]+=pre[i-1]+v[i-1];

    vector<int> one(n+1,0);
    for(int i=0; i<n; i++) one[i+1]=one[i]+(v[i]==1);

    while(q--){
        int l,r;
        cin>>l>>r;

        int x = pre[r]-pre[l-1];
        int y = r-l+1;

        int none = one[r]-one[l-1];

        if(l==r){
            no;
            continue;
        }

        int m = 2*none+y-none;
        if(x>=m) yes;
        else no;
    }

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