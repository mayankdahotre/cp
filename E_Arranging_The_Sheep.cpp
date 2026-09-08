#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n;
    cin>>n;

    string s;
    cin>>s;

    vector<int> p1(n,0), p2(n,0);
    vector<int> s1(n,0), s2(n,0);

    for(int i=0; i<n; i++){
        p1[i+1]+=p1[i]+(s[i]=='*');
        p2[i+1]+=p2[i]+(s[i]=='.');
    }

    for(int i=n-1; i>=0; i--){
        s1[i]+=s1[i+1]+(s[i]=='*');
        s2[i]
    }
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