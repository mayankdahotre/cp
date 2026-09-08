#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n,k;
    cin>>n>>k;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end());

    int c=0, x=v[0];
    vector<int> f;
    for(int i=0; i<n; i++){
        if(v[i]==x) c++;
        else{
            f.push_back(c);
            c=1;
            x=v[i];
        }
    }
    if(c) f.push_back(c);

    sort(f.begin(), f.end());

    int ans=f.size();
    for(int i=0; i<f.size(); i++){
        if(k>=f[i]){
            k-=f[i];
            ans--;
        }
        else break;
    }

    if(ans==0) ans++;
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