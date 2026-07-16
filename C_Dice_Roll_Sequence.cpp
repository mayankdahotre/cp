#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int p=0;
    int ans=0;

    for(int i=0; i<n; i++){
        if(v[i]==v[i+1] || v[i]+v[i+1]==7){
            p++;
        }
        else{
            ans+=(p+1)/2;
            p=0;
        }
        // cout<<i<<" "<<p<<" "<<ans<<endl;
    }

    cout<<ans<<endl;


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