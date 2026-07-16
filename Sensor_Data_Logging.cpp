#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int t, x;
    cin>>t>>x;

    vector<pair<int, int>> v;
    int t0;
    cin>>t0;

    cout<<0<<" "<<t0<<endl;

    int a=t0;
    for(int i=1; i<=t; i++){
        int y;
        cin>>y;

        if(abs(y-a)>=x){
            a=y;
            cout<<i<<" "<<a<<endl;
        }
    }

    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}