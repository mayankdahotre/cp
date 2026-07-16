#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, h;
    cin>>n>>h;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    vector<int> p;
    for(int i=0; i<n; i++){
        if(i==0) if(v[i]<v[i+1]) p.push_back(i);
        if(v[i]<v[i-1] && v[i]<v[i+1]) p.push_back(i);
        if(n==n-1) if(v[i]<v[i-1]) p.push_back(i);
    }

    int np = p.size();
    for(int i=0; i<p; i++)
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