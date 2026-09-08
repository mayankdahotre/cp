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

    if(n<=2){
        cout<<-1<<endl;
        return;
    }

    sort(v.begin(), v.end());
    // debugv(v);

    int sum=0;
    for(int i=0; i<n; i++) sum+=v[i]; 

    int mid = v[n/2]*n*2;              
    mid++;
    int x = mid-sum;

    if(x<=0){
        cout<<0<<endl;
        return;
    }

    cout<<x<<endl;
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