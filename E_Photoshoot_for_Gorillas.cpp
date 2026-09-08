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
    int n,m,k;
    cin>>n>>m>>k;

    int w;
    cin>>w;

    vector<int> v(w,0);
    for(int i=0; i<w; i++) cin>>v[i];

    sort(v.begin(), v.end(), greater<int>());

    // int x = (n-k+1)*(m-k+1);

    vector<int> a(n), b(m);
    for(int i=0; i<n; i++) a[i]=min(min(k,n-k+1),min(i+1,n-i));
    for(int i=0; i<m; i++) b[i]=min(min(k,m-k+1),min(i+1,m-i));

    sort(a.begin(), a.end(), greater<int>());
    sort(b.begin(), b.end(), greater<int>());

    vector<int> f;
    for(int i=0; i<n; i++) for(int j=0; j<m; j++) f.push_back(a[i]*b[j]);

    sort(f.begin(), f.end(), greater<int>());

    int ans=0;
    for(int i=0; i<w; i++) ans+=f[i]*v[i];

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