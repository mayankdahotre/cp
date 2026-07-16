#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    if(v.size()>3 || (v.size()==3 && v[1]-v[0]!=v[2]-v[1])){
        cout<<-1<<endl;
        return;
    }

    if((v.back()+v[0])%2) cout<<v.back()-v[0]<<endl;
    else cout<<(v.back()-v[0])/2<<endl;

    return;
}   

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}