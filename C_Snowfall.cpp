#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    vector<int> m2,m3,m6,m0;

    int d2=0, d3=0, d6=0;
    for(int i=0; i<n; i++){
        if(v[i]%6==0) m6.push_back(v[i]);
        else if(v[i]%2==0) m2.push_back(v[i]);
        else if(v[i]%3==0) m3.push_back(v[i]);
        else m0.push_back(v[i]);
    }

    vector<int> res;

    for(int i=0; i<m6.size(); i++) res.push_back(m6[i]);

    if(m2.size()<=m3.size()){
        for(int i=0; i<m2.size(); i++) res.push_back(m2[i]);
        for(int i=0; i<m0.size(); i++) res.push_back(m0[i]);
        for(int i=0; i<m3.size(); i++) res.push_back(m3[i]);
    }
    else{
        for(int i=0; i<m3.size(); i++) res.push_back(m3[i]);
        for(int i=0; i<m0.size(); i++) res.push_back(m0[i]);
        for(int i=0; i<m2.size(); i++) res.push_back(m2[i]);
    }

    for(int i=0; i<res.size(); i++) cout<<res[i]<<" ";
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






