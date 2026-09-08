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
    int n,d,k;
    cin>>n>>d>>k;

    vector<pair<int,int>> v(k);
    for(int i=0; i<k; i++) cin>>v[i].first>>v[i].second;

    vector<int> bd(n+2,0);
    for(int i=0; i<k; i++){
        int l=v[i].first, r=v[i].second;
        bd[max(1LL,l-d+1)]++;
        bd[r+1]--;
    }

    int mn=n, mx=0;
    vector<int> b(n+1,0);
    for(int i=1; i<=n-d+1; i++){
        b[i]=b[i-1]+bd[i];
        mn=min(mn, b[i]);
        mx=max(mx, b[i]);
    }

    int x=0, y=0;
    for(int i=1; i<=n-d+1; i++){
        if(b[i]==mx && x==0) x=i;
        if(b[i]==mn && y==0) y=i;
    }

    cout<<x<<" "<<y<<endl;
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