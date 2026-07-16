#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;

void solve() {
    int n;
    cin>>n;

    if(n==1){
        cout<<1<<endl;
        return;
    }

    if(n%2 && n!=1){
        cout<<-1<<endl;
        return;
    }

    vector<int> v(n);
    for(int i=0; i<n; i++) v[i]=i+1;
    for(int i=0; i<n; i+=2) swap(v[i],v[i+1]);

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