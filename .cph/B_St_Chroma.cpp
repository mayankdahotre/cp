#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, x;
    cin>>n>>x;

    vector<int> v;
    for(int i=0; i<x; i++) v.push_back(i);
    if(v.size()<n) for(int i=x+1; i<n; i++) v.push_back(i);
    if(v.size()<n) v.push_back(x);

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