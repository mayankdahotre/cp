#include <bits/stdc++.h>
using namespace std;

void solve() {
    int l,r,d,u;
    cin>>l>>r>>d>>u;

    if(l==r && r==d && d==u){
        cout<<"YES"<<endl;
        return;
    }
    else{
        cout<<"NO"<<endl;
        return;
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