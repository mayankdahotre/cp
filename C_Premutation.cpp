#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<vector<int>> v(n, vector<int>(n-1));
    for(int i=0; i<n; i++) for(int j=0; j<n-1; j++) cin>>v[i][j];

    map<int,int> m;
    for(int i=0; i<n; i++) m[v[i][0]]++;

    int p0 = -1;
    for(auto x: m) if(x.second == n-1) p0 = x.first;

    vector<int> rest;
    for(int i=0; i<n; i++){
        if(v[i][0]!=p0){
            rest = v[i];
            break;
        }
    }

    cout<<p0<<" ";
    for(int i=0; i<(int)rest.size(); i++) cout<<rest[i]<<" ";
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