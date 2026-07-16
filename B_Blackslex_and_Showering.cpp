#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int sum=0;
    for(int i=0; i<n-1; i++) sum+=abs(v[i]-v[i+1]);

    int x=max(abs(v[0]-v[1]), abs(v[n-1]-v[n-2]));
    for(int i=1; i<n-1; i++) x=max(abs(v[i-1]-v[i])+abs(v[i]-v[i+1])-abs(v[i-1]-v[i+1]), x);

    sum-=x;
    
    cout<<sum<<endl;
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