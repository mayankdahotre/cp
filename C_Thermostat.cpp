#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int l,r,x;
    cin>>l>>r>>x;

    int a,b;
    cin>>a>>b;

    if(a==b){
        cout<<0<<endl;
        return;
    }
    else if(abs(a-b)>=x){
        cout<<1<<endl;
        return;
    }
    else if(r-max(a,b)>=x || min(a,b)-l>=x){
        cout<<2<<endl;
        return;
    }
    else if(r-b>=x && a-l>=x || r-a>=x && b-l>=x){
        cout<<3<<endl;
        return;
    }
    else{
        cout<<-1<<endl;
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