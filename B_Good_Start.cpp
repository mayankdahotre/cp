#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int w,h,a,b;
    cin>>w>>h>>a>>b;

    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;

    int x = l2-l1-a;
    int y = r2-r1-b;

    if((x%a==0 && x>0) || (y%b==0 && y>0)) yes;
    else no;

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