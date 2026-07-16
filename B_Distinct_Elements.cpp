#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    reverse(v.begin(), v.end());

    int a=1;
    vector<int> res(n);
    for(int i=0; i<n-1; i++){
        if(v[i+1]-v[i]==1) res[i]=a;
        else{
            a++;
            res[i]=a;
        }
    }

    if(v[n-1]-v[n-2]==1) res[n-1]=a;
    else res[n-1]=a+1;

    reverse(res.begin(), res.end());

    for(int i=0; i<n; i++) cout<<res[i]<<" ";
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