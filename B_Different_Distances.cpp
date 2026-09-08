#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << "\n";
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << "\n";
#define debugvv(v) { cout << #v << " = " << "\n"; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << "\n"; } }

void solve() {
    int n;
    cin>>n;

    if(n%2==0){
        for(int i=1; i<=n; i+=2) cout<<i<<" "<<i+1<<" "<<i+1<<" "<<i<<" "<<i+1<<" "<<i<<" "<<i<<" "<<i+1<<" ";
    }
    else{
        cout<<1<<" "<<1<<" "<<2<<" "<<1<<" "<<2<<" "<<3<<" "<<1<<" "<<3<<" "<<2<<" "<<2<<" "<<3<<" "<<3<<" ";
        for(int i=4; i<=n; i+=2) cout<<i<<" "<<i+1<<" "<<i+1<<" "<<i<<" "<<i+1<<" "<<i<<" "<<i<<" "<<i+1<<" ";
    }

    cout<<endl;
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