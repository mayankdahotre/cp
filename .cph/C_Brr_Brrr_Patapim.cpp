#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> v(2*n);
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>v[i+j-1];
        }
    }
    
    int sum=(2*n)*(2*n+1)/2, sum2=0;
    for(int i=1; i<2*n; i++) sum2+=v[i];

    v[0]=sum-sum2;

    for(int i=0; i<2*n; i++) cout<<v[i]<<" ";
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