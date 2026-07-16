#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int z=0;
    for(int i=0; i<n; i++){
        if(v[i]==0) z++;
    }
    if(z==n){
        cout<<0<<endl;
        return;
    }

    int in=0;
    bool b = false;
    for(int i=0; i<n; i++){
        if(v[i]!=0){
            if(!b) in++;
            b=true;
        }
        else{
            b=false;
        }
    }

    int ans = min(2LL,in);
    cout<<ans<<endl;
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


