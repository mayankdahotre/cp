#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
#define yes cout << "YES\n"
#define no cout << "NO\n"

bool p(int n){
    if (n < 2) return false;
    bool isp = true;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            isp = false;
            break;
        }
    }
    return isp;
}

void solve() {
    int n,k;
    cin>>n>>k;

    if(k==1){
        if(p(n)) yes;
        else no;
        return;
    }
    else if(n==1){
        if(k==2) yes;
        else no;
        return;
    }
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