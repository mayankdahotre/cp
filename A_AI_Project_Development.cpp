#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

int cd(int a, int b){
    return (a+b-1)/b;
}

void solve() {
    int n,x,y,z;
    cin>>n>>x>>y>>z;

    int ans1 = cd(n, x+y);

    int ans2=0;
    if(n/x<=z) ans2 = cd(n, x);
    else ans2 = z+cd(n-x*z, 10*y+x);

    cout<<min(ans1,ans2)<<endl;
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