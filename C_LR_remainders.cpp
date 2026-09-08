#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve() {
    int n,m;
    cin>>n>>m;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i]<0) v[i]=m-v[i]%m;
        else v[i]%=m;
    }

    string s;
    cin>>s;

    if(m==1){
        for(int i=0; i<n; i++) cout<<0<<" ";
        cout<<endl;
        return;
    }

    vector<int> pre(n+1,1);
    for(int i=0; i<n; i++) pre[i+1]=pre[i]*v[i];

    // debugv(pre);

    int l=0, r=n;
    for(int i=0; i<n; i++){
        int x = (pre[r]/pre[l]);
        int rem=0;
    
        if(x<0) rem=m-x%m;
        else rem = x%m;

        cout<<rem<<" ";

        if(s[i]=='L') l++;
        else r--;
    }

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