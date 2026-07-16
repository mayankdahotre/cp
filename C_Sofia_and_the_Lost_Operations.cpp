#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n;
    cin>>n;

    vector<int> a(n), b(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];

    int m;
    cin>>m;
    
    vector<int> d(m);
    for(int i=0; i<m; i++) cin>>d[i];

    int same=0;
    for(int i=0; i<n; i++) if(a[i]==b[i]) same++;

    if(find(b.begin(), b.end(), d[m-1])==b.end()){
        cout<<"NO"<<endl;
        return;
    }

    map<int,int> mpb;
    map<int,int> mpd;

    for(int i=0; i<n; i++) if(a[i]!=b[i]) mpb[b[i]]++;

    for(int i=0; i<m; i++) mpd[d[i]]++;

    for(auto p: mpb){
        int i=p.first;
        int f=p.second;

        if(mpd[i]<f){
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
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