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

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int x=7;
    vector<pair<int,int>> occ(x, {-2, -2});
    occ[0] = {-1, -1};

    int sum=0;
    for(int i=0; i<n; i++){
        sum+=v[i];
        int rem=((sum%x)+x)%x;

        if(occ[rem].first == -2) occ[rem].first = i;
        occ[rem].second = i;
    }

    int ans=0;
    for(int i=0; i<x; i++){
        if(occ[i].first != -2){
            ans=max(ans, occ[i].second - occ[i].first);
        }
    }

    cout<<ans<<endl;
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}