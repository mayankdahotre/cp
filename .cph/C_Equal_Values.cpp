#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int a=0,b=0,mc=LLONG_MAX,c=v[0];
    for(int i=0; i<n; i++){
        if(v[i]!=c){
            mc = min(mc,(n-b+a-1)*c);
            c=v[i];
            a=i;
            b=i;
        }
        else{
            b=i;
        }
    }
    mc = min(mc,(n-b+a-1)*c);

    cout<<mc<<endl;
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