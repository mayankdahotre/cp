#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    int k = 0;
    while((1LL<<k) <= n-1) k++;
    k--;

    int p = (1LL<<k);

    for(int i = p-1; i >= 0; i--) cout<<i<<" ";

    for(int i = p; i < n; i++) cout<<i<<" ";

    cout<<endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;
    while(T--) solve();

    return 0;
}