#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int maxn = v[0];
    int sum = 0;
    int idx = 0;
    for(int i=0; i<n; i++){
        maxn = max(maxn,v[i]);
        sum+=v[i];
        if(sum-maxn==maxn){
            idx++;
        }
    }

    cout<<idx<<endl;
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