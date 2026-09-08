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

    string s;
    cin>>s;

    vector<int> v(n);
    for(int i=0; i<n; i++) v[i]=s[i]-'a';

    if(is_sorted(v.begin(), v.end())){
        cout<<0<<endl;
        return;
    }

    vector<int> v2;
    auto it = v.begin();
    for(int i=0; i<n; i++){
        if(it>v.end()) break;
        int mxi = max_element(it, v.end()) - v.begin();
        v2.push_back(mxi);
        it = mxi + v.begin();
    }

    vector<int> v3;
    set<int> vis(v2.begin(), v2.end());
    for(int i=0; i<n; i++){
        if(vis.find(i)==vis.end()){
            v3.push_back(v[i]);
        }
    }

    for(int i=0; i<v2.size()/2; i++){
        swap(v[v2[i]], v[v2[sz-i]]);
    }

    if(!is_sorted(v.begin(), v.end())){
        cout<<-1<<endl;
        return;
    }

    if(!is_sorted(v3.begin(), v3.end())){
        cout<<-1<<endl;
        return;
    }

    if(v2.size()==1){
        cout<<-1<<endl;
    }

    int ans = v2.size()-1;

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