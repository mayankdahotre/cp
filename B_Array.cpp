#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> a(n);
    for(int i=0; i<n; i++) cin>>a[i];

    vector<int> v(n,0);
    for(int i=0; i<n-1; i++){
        int l=0, g=0;
        for(int j=i+1; j<n; j++){
            if(a[j]>a[i]) g++;
            if(a[j]<a[i]) l++;
            v[i]=max(l,g);
        }
    }
    for(int i=0; i<n; i++) cout<<v[i]<<" ";
    cout<<endl;
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