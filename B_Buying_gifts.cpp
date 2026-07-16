#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

void solve() {
    int n;
    cin>>n;

    vector<int> a(n), b(n);
    for(int i=0; i<n; i++) cin>>a[i]>>b[i];

    int mxa=-1, mxb=-1;
    for(int i=0; i<n; i++){
        debug(i);
        if(mxa==-1 && mxb==-1){
            if(a[i]<b[i]) mxa=a[i];
            else mxb=b[i];
            continue;
        }
        int d = abs(mxa-mxb);
        if(abs(max(max(mxa,0LL), a[i])-mxb)<d) mxa=a[i];
        else if(abs(max(max(mxb,0LL), b[i])-mxa)<d) mxb=b[i];

        debug(mxa);
        debug(mxb);
    }

    cout<<abs(mxa-mxb)<<endl;
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