#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n,k;
    cin>>n>>k;

    vector<int> a(n), b(n);
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++) cin>>b[i];

    vector<int> capsuf(n);
    for(int i=0; i<n; i++) capsuf[i]=a[i]/b[i];

    for(int i=n-2; i>=0; i--) capsuf[i]+=capsuf[i+1];

    if(capsuf[0]<k){
        for(int i=0; i<n; i++) cout<<0<<" ";
        cout<<endl;
        return;
    }

    vector<int> c(n);
    for(int i=0; i<n-1; i++){
        c[i]=max(0LL,k-capsuf[i+1]);
        k-=c[i];
    }
    c[n-1]=k;

    for(int i=0; i<n; i++) cout<<c[i]<<" ";
    cout<<endl;

    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}