#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n;
    cin>>n;

    if(n==1){
        cout<<1<<endl;
        return;
    }

    if(n==2){
        cout<<-1<<endl;
        return;
    }

    vector<int> v(50);
    int x=6;
    v[0]=2;
    v[1]=4;
    for(int i=2; i<50; i++){
        if(__gcd(v[i-1], v[i-2])==v[i-2]) v[i]=x;
        else v[i]=2*v[i-1];
        x+=v[i];
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