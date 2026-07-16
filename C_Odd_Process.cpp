#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    vector<int> o, e;
    for(int i=0; i<n; i++){
        if(v[i]%2) o.push_back(v[i]);
        else e.push_back(v[i]);
    }

    sort(o.begin(), o.end());
    sort(e.begin(), e.end(), greater<int>());

    for(int i=1; i<e.size(); i++) e[i]+=e[i-1];

    vector<int> ans(n,0);
    
    if(o.size()==0){
        for(int i=0; i<n; i++) cout<<0<<" ";
        cout<<endl;
        return;
    }

    if(e.size()==0){
        int mxo = o.back();
        for(int i=0; i<n; i++){
            if(i%2==0) cout<<mxo<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;
        return;
    }

    ans[0]=o.back();
    for(int i=1; i<=e.size(); i++) ans[i]=ans[0]+e[i-1];

    int a1=ans[e.size()], a2=ans[e.size()-1]; 
    for(int i=e.size()+1; i<n; i++){
        if((i-e.size())%2==0) ans[i]=a1;
        else ans[i]=a2;
    }

    int sum=e[e.size()-1];
    for(int i: o) sum+=i;

    if(sum%2==0) ans[n-1]=0;

    for(int i=0; i<n; i++) cout<<ans[i]<<" ";
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