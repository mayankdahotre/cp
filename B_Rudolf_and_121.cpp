#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;
    
    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    for(int i=0; i<n-2; i++){
        if(v[i]<0){
            cout<<"NO"<<endl;
            return;
        }

        v[i+1]-=v[i]*2;
        v[i+2]-=v[i];
        v[i]-=v[i];
    }

    if(v[n-1]!=0 || v[n-2]!=0){
        cout<<"NO"<<endl;
        return;
    }
    else{
        cout<<"YES"<<endl;
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