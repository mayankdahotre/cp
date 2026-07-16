#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    int diff=-1;

    for(int i=1;i<n;i++){
        if(v[i]!=v[0]){
            diff=i;
            break;
        }
    }

    if(diff==-1){
        cout<<"NO"<<endl;
        return;
    }

    cout<<"YES"<<endl;

    for(int i=1;i<n;i++){
        if(v[i]!=v[0]){
            cout<<1<<" "<<i+1<<endl;
        }
    }

    for(int i=1;i<n;i++){
        if(v[i]==v[0]){
            cout<<diff+1<<" "<<i+1<<endl;
        }
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