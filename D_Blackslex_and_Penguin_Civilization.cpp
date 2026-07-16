#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n;
    cin>>n;

    int x = (1<<n);

    vector<int> v;

    map<int,int> mp;
    for(int i=n; i>=0; i--){
        mp[(1<<i)-1]++;
        v.push_back((1<<i)-1);

        for(int j=i+2; j<n; j++){
            if(((1<<j)+(1<<i)-1)<((1<<n)-1)){
                v.push_back((1<<j)+(1<<i)-1);
                mp[((1<<j)+(1<<i)-1)]++;
            }
        }
    }

    for(int i=1; i<(1<<n); i+=2){
        if(!mp.count(i)) v.push_back(i);
    }

    for(int i=0; i<(1<<n); i+=2){
        v.push_back(i);
    }

    for(auto i: v){
        cout<<i<<" ";
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