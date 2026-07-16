#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    if(b<=d&&c<=a+d-b) cout<<(d-b)+(a+d-b-c)<<endl;
    else cout<<"-1"<<endl;
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