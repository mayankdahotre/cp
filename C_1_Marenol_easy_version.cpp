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

    string a,b;
    cin>>a>>b;

    if(n<3){
        if(a==b) yes;
        else no;
        return;
    }

    int net1o=0;
    for(int i=0; i<n; i+=2){
        if(a[i]=='1') net1o++;
        if(b[i]=='1') net1o--;
    }

    int net1e=0;
    for(int i=1; i<n; i+=2){
        if(a[i]=='1') net1e++;
        if(b[i]=='1') net1e--;
    }

    if(net1o || net1e) no;
    else yes;

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