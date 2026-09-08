#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n,k;
    cin>>n>>k;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    if(v[0]==v[n-1]){
        for(int i=0; i<n; i++){
            if(v[i]==v[0]) k--;
            if(k==0) break;
        }

        if(k) no;
        else yes;
        return;
    }

    int x=k, r=-1;
    for(int i=n-1; i>0; i--){
        if(v[i]==v[n-1]) x--;
        if(x==0){
            r=i;
            break;
        }
    }

    if(x){
        no;
        return;
    }

    int y=k, l=-1;
    for(int i=0; i<n; i++){
        if(v[i]==v[0]) y--;
        if(y==0){
            l=i;
            break;
        }
    }

    if(y){
        no;
        return;
    }

    if(l<r) yes;
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