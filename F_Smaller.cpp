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

    priority_queue <<string, vector<string>, greater<string>()> s,t;

    for(int i=0; i<n; i++){
        int a,k;
        string x;

        cin>>a>>k>>x;

        if(a==1) s.push(string(k,x));
        else t.push_back(string(k,x));

        string s1,s2;
        vector<string> vs, vt;

        while(true){
            s1+=s.top();
            vs.push_back(s1);
            s.pop();

            s2+=t.top();
            vt.push_back(s2);
            t.pop();

            if(s1<s2){
                yes;
                break;
            }
            else if(s2>s1){
                no;
                break;
            }
        }

        for(auto y: vs) s.push(y);
        for(auto y: vt) t.push(y);
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