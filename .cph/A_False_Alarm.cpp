#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,x;
    cin>>n>>x;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int a=0, b=n-1;
    for(int i=0; i<n; i++){
        if(v[i]==1){
            a=i;
            break;
        }
    }
    for(int i=n-1; i>=0; i--){
        if(v[i]==1){
            b=i;
            break;
        }
    }

    if(b-a+1<=x) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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