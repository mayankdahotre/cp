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

    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    int mex=0;
    int c=1;

    if(v.size()==1){
        cout<<1<<endl;
        return;
    }

    for(int i=0; i<v.size()-1; i++){
        if(v[i+1]-v[i]==1) c++;
        else{
            mex=max(mex, c);
            c=1;
        }
    }
    mex=max(mex, c);

    cout<<mex<<endl;
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