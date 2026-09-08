#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int a,b,c;
    cin>>a>>b>>c;

    int l=min({a,b,c});
    int r=max({a,b,c});
    int m=a+b+c-l-r;

    // int x1=0, x2=0, x3=0;
    // int sum = (a+b+c);
    // int mod = sum%3;
    // int avg = sum/3;

    // x1=avg, x2=avg, x3=avg;
    // if(mod){
    //     x1++; 
    //     mod--;
    // }
    // if(mod){
    //     x2++; 
    //     mod--;
    // }

    int ans = min({m-l, r-m, (r-l)/2});

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