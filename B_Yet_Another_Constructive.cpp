#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n,k,m;
    cin>>n>>k>>m;

    vector<int> v(n);
    
    bool ok = k<=m;

    if(ok){
        yes;
        vector<int> rep(k,1);
        rep[k-1]=m-k+1;

        for(int i=0; i<n/k; i++) for(int i=0; i<k; i++) cout<<rep[i]<<" ";
        
        for(int i=0; i<n%k; i++) cout<<1<<" ";

        cout<<endl;
        return;
    }
    else{
        no;
        return;
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