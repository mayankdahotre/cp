#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n, x, y;
    cin>>n>>x>>y;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    if(__gcd(x,y)==1 || is_sorted(v.begin(), v.end())){
        cout<<"YES"<<endl;
        return;
    }
    else{
        int g = __gcd(x,y);
        vector<vector<int>> ve(g);
        for(int i=0; i<n; i++) ve[i%g].push_back(v[i]);
        for(int i=0; i<g; i++) sort(ve[i].begin(), ve[i].end());

        for(int i=0; i<g; i++){
            int j=i;
            int k=0;
            while(j<n){
                v[j]=ve[i][k];
                j+=g;
                k++;
            }
        }

        if(is_sorted(v.begin(), v.end())) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
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