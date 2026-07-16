#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    map<int,int> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            int x;
            cin>>x;

            m[x]++;
        }
    }

    for(auto p: m){
        if(p.second>n*(n-1)){
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