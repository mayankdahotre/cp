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

    vector<vector<int>> adj(n);

    int t=n-1;
    while(t--){
        int u,v,a,b;
        cin>>u>>v>>a>>b;
        u--;
        v--;

        if(a<b){
            int x = u;
            while(adj[x].size()) x=adj[x];
            adj[x]=v;
        }
        else{
            int x = v;
            while(adj[x].size()) x=adj[x];
            adj[x]=u;
        }
    }

    vector<int> vis(n,0);
    vector<int> v;
    for(int i=0; i<n; i++){
        if(vis[i]) continue;
        int x = i;
        if(vis[adj[x]]) v.insert(find(v.begin(), v.end(), adj[x]), x);
        v.push_back(x);
        while(adj[x].size()){
            x=adj[x];
            vis[x]=1;
            v.push_back(x);
        }
    }

    vector<int> ans(n);
    for(int i=0; i<n; i++) ans[v[i]]=i+1;

    for(int i=0; i<n; i++) cout<<ans[i]<<" ";
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