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
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    map<int,int> mp;
    for(int i=0; i<n; i++) mp[v[i]]++;

    int ps = mp.size();
    int pg1=0;
    for(auto p: mp) if(p.second>1) pg1++;

    if(pg1<2){
        cout<<-1<<endl;
        return;
    }

    vector<int> res(n,1);
    
    set<int> val;
    for(int i=0; i<n; i++) if(mp[v[i]]==1) val.insert(v[i]);

    int x=2;
    for(int i=0; i<n; i++){
        if(mp[v[i]]==1 && val.find(v[i])==val.end()){
            res[i]=x;
            x=5-x;
        }

        mp[v[i]]--;
    }

    for(int i=0; i<n; i++) cout<<res[i]<<" ";
    cout<<endl;

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