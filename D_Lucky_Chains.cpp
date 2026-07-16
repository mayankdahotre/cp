#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int x,y;
    cin>>x>>y;

    if(x==y-1){
        cout<<-1<<endl;
        return;
    }

    if(__gcd(x,y)!=1){
        cout<<0<<endl;
        return;
    }

    if(x%2 && y%2){
        cout<<1<<endl;
        return;
    }

    if(x%2==0 && y%2==0){
        cout<<0<<endl;
        return;
    }

    int d = y-x;

    int f=d;
    for(int i=2; i*i<=d; i++){
        if(d%i==0){
            f=i;
            break;
        }
    }

    cout<<f-x%f<<endl;
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