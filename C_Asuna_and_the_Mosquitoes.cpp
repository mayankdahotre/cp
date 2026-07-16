#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    bool oke = false;
    for(int i=0; i<n; i++){
        if(v[i]%2==0){
            oke=true;
            break;
        }
    }

    bool oko = false;
    for(int i=0; i<n; i++){
        if(v[i]%2){
            oko=true;
            break;
        }
    }

    if(!oke || !oko){
        cout<<*max_element(v.begin(), v.end())<<endl;
        return;
    }

    else{
        int ans=0;
        for(int i=0; i<n; i++){
            if(v[i]%2) ans+=v[i]-1;
            else ans+=v[i];
        }
        ans++;

        cout<<ans<<endl;
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