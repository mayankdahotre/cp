#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end());

    map<int,int> m;
    for(int i=0; i<n; i++) m[v[i]]++;

    int ans=0;
    int sum=0;
    for(auto p: m){
        int i=p.first;
        int f=p.second;

        if(f==1){
            sum+=f;
            continue;
        }
        
        ans+=f*(f-1)/2*(sum);
        ans+=f*(f-1)*(f-2)/6;

        sum+=f;
    }

    cout<<ans<<endl;
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