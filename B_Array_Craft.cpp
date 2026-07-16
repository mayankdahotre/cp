#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n,x,y;
    cin>>n>>x>>y;

    x--;
    y--;

    vector<int> v(n,1);
    for(int i=x+1; i<n; i++){
        if((i-x)%2) v[i]=-1;
        else v[i]=1;
    }
    for(int i=y-1; i>=0; i--){
        if((y-i)%2) v[i]=-1;
        else v[i]=1;
    }

    for(int i=0; i<n; i++) cout<<v[i]<<" ";
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