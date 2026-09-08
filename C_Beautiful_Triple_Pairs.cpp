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

int check(int i, int j, vector<int> v){
    int x=0;
    if(v[i]==v[j] && v[i+1]==v[j+1] && v[i+2]!=v[j+2]) x++;
    if(v[i]==v[j] && v[i+1]!=v[j+1] && v[i+2]==v[j+2]) x++;
    if(v[i]==v[j] && v[i-1]==v[j-1] && v[i-2]!=v[j-2]) x++;

    return x;
}

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    map<int,vector<int>> mpv;

    for(int i=0; i<n; i++) mpv[v[i]].push_back(i);

    int ans=0;

    for(auto p: mpv){
        vector<int> x = p.second;

        for(int i=0; i<x.size(); i++){
            for(int j=i+1; j<x.size(); j++){
                ans+=check(x[i], x[j], v);
            }
        }
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