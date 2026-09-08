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

bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.first+a.second==b.first+b.second) return abs(a.first-a.second)<=abs(b.first-b.second);
    return a.first+a.second<b.first+b.second;
}

void solve() {
    int n,k;
    cin>>n>>k;

    vector<pair<int,int>> v;
    for(int i=0; i<n; i++) cin>>v[i].first>>v[i].second;

    sort(v.begin(), v.end(), cmp);

    for(int i=0; i<k; i++){
        pair<int,int> a,b;
        a=v[i], b=v[i+1];

        vector<int> t;
        t.push_back(a.first);
        t.push_back(a.second);
        t.push_back(b.first);
        t.push_back(b.second);

        sort(t.begin(), t.end());

        v[i].first=t[0];
        v[i+1].first=t[1];
        v[i].second=t[2];
        v[i+1].second=t[3];
    }

    int ans=0;
    for(int i=0; i<n; i++) ans+=abs(v[i].first-v[i].second);

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