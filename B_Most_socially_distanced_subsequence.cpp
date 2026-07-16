#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    vector<int> res;
    res.push_back(v[0]);

    for(int i=1; i<n-1; i++){
        if(v[i]<v[i+1] && v[i]<v[i-1]) res.push_back(v[i]);
        if(v[i]>v[i+1] && v[i]>v[i-1]) res.push_back(v[i]);
    }

    res.push_back(v[n-1]);

    cout<<res.size()<<endl;
    for(int i=0; i<res.size(); i++) cout<<res[i]<<" ";
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