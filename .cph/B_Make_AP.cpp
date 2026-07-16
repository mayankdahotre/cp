#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int a,b,c;
    cin>>a>>b>>c;

    int na = 2*b-c;
    int nb = (a+c)/2;
    int nc = 2*b-a;

    if((na%a==0 && na>0 && na-b==b-c) || (nb%b==0 && nb>0 && a-nb==nb-c) || (nc%c==0 && nc>0 && a-b==b-nc)){
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