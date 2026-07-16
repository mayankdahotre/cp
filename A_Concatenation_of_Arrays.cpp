#include <bits/stdc++.h>
using namespace std;

#define int long long
#define debug(x) cout << #x << " = " << x << endl;
#define debugv(v) cout << #v << " = "; for(auto it : v) cout << it << ' '; cout << endl;
#define debugvv(v) { cout << #v << " = " << endl; for(auto &r : v){ for(auto &x : r) cout << x << ' '; cout << endl; } }

bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.second==b.second) return a.first<=b.first;
    return a.second<b.second;
}

// bool cmp(pair<int,int> a, pair<int,int> b){
//     if(a.second != b.second)
//         return a.second < b.second;
//     return a.first < b.first;
// }

void solve() {
    int n;
    cin>>n;

    vector<pair<int,int>> vp(n);
    for(int i=0; i<n; i++) cin>>vp[i].first>>vp[i].second;

    sort(vp.begin(), vp.end());
    
    vector<int> a(2*n);

    for(int i=0; i<n; i++){
        a[2*i]=vp[i].first;
        a[2*i+1]=vp[i].second;
    }

    sort(vp.begin(), vp.end(), cmp);

    vector<int> b(2*n);

    for(int i=0; i<n; i++){
        b[2*i]=vp[i].first;
        b[2*i+1]=vp[i].second;
    }

    int ca=0, cb=0;
    for(int i=0; i<2*n-1; i++) for(int j=i+1; j<2*n; j++) if(a[i]>a[j]) ca++;
    for(int i=0; i<2*n-1; i++) for(int j=i+1; j<2*n; j++) if(b[i]>b[j]) cb++;

    if(ca<=cb){
        for(int i=0; i<2*n; i++) cout<<a[i]<<" ";
        cout<<endl;
        return;
    }
    else{
        for(int i=0; i<2*n; i++) cout<<b[i]<<" ";
        cout<<endl;
        return;
    }

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