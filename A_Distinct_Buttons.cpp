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

    vector<int> x(n), y(n);
    for(int i=0; i<n; i++) cin>>x[i]>>y[i];

    int cx=0, cy=0;
    for(int i=0; i<n; i++){
        if(x[i]>=0) cx++;
        if(y[i]>=0) cy++;
    }

    if(abs(cx)==n || abs(cy)==n){
        yes;
        return;
    }

    cx=0, cy=0;
    for(int i=0; i<n; i++){
        if(x[i]<=0) cx++;
        if(y[i]<=0) cy++;
    }

    if(abs(cx)==n || abs(cy)==n){
        yes;
        return;
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