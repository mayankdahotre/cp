#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,m;
    cin>>n>>m;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int cnt=1;
    int val=v[0];
    for(int i=1; i<n; i++){
        if(v[i]==val){
            cnt++;
        }
        else{
            cnt=1;
            val=v[i];
        }
        if(cnt>=m){
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