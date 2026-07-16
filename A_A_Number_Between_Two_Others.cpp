#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int x,y;
    cin>>x>>y;

    int a=1, b=y/x;

    for(int i=2; i<b; i++){
        if(__gcd(i,b)==1){
            cout<<"YES"<<endl;
            return;
        }
    }
    
    cout<<"NO"<<endl;
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