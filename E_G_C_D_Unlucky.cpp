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

    vector<int> p(n), s(n);
    for(int i=0; i<n; i++) cin>>p[i];
    for(int i=0; i<n; i++) cin>>s[i];

    for(int i=0; i<n; i++){
        if(p[i]%p[i+1]!=0 || p[i]<p[i+1]){
            no;
            return;
        }
    }

    for(int i=n-1; i>=0; i--){
        if(s[i+1]%s[i]!=0 || s[i]>s[i+1]){
            no;
            return;
        }
    }

    int g = s[0];
    for(int i=0; i<n; i++){
        if(p[i+1]==g && s[i]==g){
            yes;
            return;
        }
        if(s[i-1]==g && p[i]==g){
            yes;
            return;
        }
    }

    no;
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