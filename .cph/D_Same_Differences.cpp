#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;
    vector<int> v(n);
    map<int,int> a;
    int res=0;
    for(int i=0; i<n; i++){
        cin>>v[i];
        v[i]-=i;
        res+=a[v[i]];
        a[v[i]]++;
    }

    cout<<res<<endl;
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