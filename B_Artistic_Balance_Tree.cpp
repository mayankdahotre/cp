#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n,m;
    cin>>n>>m;

    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    vector<int> x(m);
    int odd=0, even=0;
    for(int i=0;i<m;i++){
        cin>>x[i];
        if(x[i]%2) odd++;
        else even++;
    }

    vector<int> O,E;
    for(int i=0;i<n;i++){
        if((i+1)%2) O.push_back(a[i]);
        else E.push_back(a[i]);
    }

    sort(O.begin(), O.end(), greater<int>());
    sort(E.begin(), E.end(), greater<int>());

    int marked = 0;

    for(int i=0;i<min((int)O.size(), odd);i++) marked += O[i];
    for(int i=0;i<min((int)E.size(), even);i++) marked += E[i];

    int total = accumulate(a.begin(), a.end(), 0LL);

    cout<<total - marked<<"\n";
}

int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--) solve();
}