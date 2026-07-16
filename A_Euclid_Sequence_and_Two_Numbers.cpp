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

    // set s(v.begin(), v.end());

    sort(v.begin(), v.end(), greater<int>());

    int l=0, r=1;

    bool ok=true;
    for(int i=0; i<n-2; i++){
        if(v[i]%v[i+1]!=v[i+2]){
            ok=false;
            break;
        }
    }

    if(ok || n==2){
        cout<<v[0]<<" "<<v[1]<<endl;
        return;
    }

    cout<<-1<<endl;
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