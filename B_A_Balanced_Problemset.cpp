#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int x,n;
    cin>>x>>n;

    int m=x/n;
    for(int i=m; i>=1; i--){
        int rem=x-(n-1)*i;
        if(rem%i==0){
            cout<<i<<endl;
            return;
        }
    }
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