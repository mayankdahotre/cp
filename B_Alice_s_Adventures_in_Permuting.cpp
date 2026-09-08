#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n,b,c;
    cin>>n>>b>>c;

    if(b==0 && c==0){
        cout<<-1<<endl;
        return;
    }

    if(c<=n){
        cout<<c<<endl;
        return;
    }
    else{
        int mx = (n-1)*b + c;
        int y = n-1-c;

        int ans = (n-1-c);
        cout<<ans<<endl;
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