#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n; cin>>n;
    vector<int> v(n);

    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end());

    if(v[0]==v[n-1]){
        cout<<"NO"<<endl;
        return;
    }
    else{
        cout<<"YES"<<endl;
        cout<<v[n-1]<<" ";
        for(int i=0; i<n-1; i++) cout<<v[i]<<" ";
        cout<<endl;
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