#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    vector<int> vo, ve;
    for(int i=0; i<n; i++){
        if(v[i]%2) vo.push_back(v[i]);
        else ve.push_back(v[i]);
    }

    sort(ve.begin(), ve.end());
    sort(vo.begin(), vo.end(), greater<int>());

    int sum=0;
    if(vo.size()>0) for(int i=0; i<ve.size(); i++) sum+=ve[i];
    for(int i=0; i<(vo.size()+1)/2; i++) sum+=vo[i];

    cout<<sum<<endl;
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