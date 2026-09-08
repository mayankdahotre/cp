#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n, m;
    cin>>n>>m;

    vector<int> a(n), b(m);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<m; i++) cin>>b[i];

    sort(b.begin(), b.end());

    for(int i=n-1; i>=0; i--){
        if(i==n-1) a[i]=max(a[i], b[m-1]-a[i]);

        if(a[i]>a[i+1]){
            int lb = *lower_bound(b.begin(), b.end(), a[i+1]+a[i]);
            a[i]=lb-a[i];
        }
        else{
            int lb = *lower_bound(b.begin(), b.end(), a[i+1]+a[i]);
            a[i]=max(a[i], lb-a[i]);
        }
    }

    if(is_sorted(a.begin(), a.end())){
        cout<<"YES"<<endl;
        return;
    }

    cout<<"NO"<<endl;
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