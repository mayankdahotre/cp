#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int x,y,a;
    cin>>x>>y>>a;

    a = a%(x+y);

    if(a>=x){
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