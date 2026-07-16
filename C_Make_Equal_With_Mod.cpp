#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    bool one = false;
    bool con = false;

    int n;
    cin>>n;

    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    sort(a.begin(), a.end());

    for(int i=0; i<n; i++){
        if(a[i]==1) one = true;
        if(a[i+1]-a[i]==1) con = true;
    }

    if(one && con){
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