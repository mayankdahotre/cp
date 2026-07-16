#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int a,b,x;
    cin>>a>>b>>x;

    if(a==b){
        cout<<0<<endl;
        return;
    }

    if(abs(a-b)<=2){
        cout<<abs(a-b)<<endl;
        return;
    }

    if(a<x && b<x){
        cout<<2<<endl;
        return;
    }

    vector<int> da, db;
    while(a){
        da.push_back(a);
        a/=x;
    }
    da.push_back(a);
    while(b){
        db.push_back(b);
        b/=x;
    }
    db.push_back(b);

    // debugv(da);
    // debugv(db);

    int ans=LLONG_MAX;
    for(int i=0; i<da.size(); i++){
        for(int j=0; j<db.size(); j++){
            ans=min(ans, i+j+abs(da[i]-db[j]));
        }
    }

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