#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,x;
    cin>>n>>x;

    vector<int> v(n);
    int sum = 0;
    for(int i=0; i<n; i++){
        cin>>v[i];
        sum+=v[i];
    }

    if(x==sum/n){
        cout<<"YES"<<endl;
        return;
    }
    else{
        cout<<"NO"<<endl;
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