#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    if(n%3==1) cout<<1<<endl;
    else if(n%3==2){
        if(n<3) cout<<2<<endl;
        else cout<<0<<endl;
    }
    else cout<<0<<endl;
    
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