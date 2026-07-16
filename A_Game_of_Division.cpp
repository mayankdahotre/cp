#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,k;
    cin>>n>>k;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    for(int i=0; i<n; i++) v[i]=v[i]%k;

    map<int,int> m;
    for(int i=0; i<n; i++) m[v[i]]++;

    for(int i=0; i<n; i++){
        if(m[v[i]]==1){
            cout<<"YES"<<endl;
            cout<<i+1<<endl;
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