#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,m,p,q;
    cin>>n>>m>>p>>q;

    int x = n/p;
    int y = n%p;

    if(y==0){
        if(x*q==m){
            cout<<"YES"<<endl;
            return;
        }
        else{
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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