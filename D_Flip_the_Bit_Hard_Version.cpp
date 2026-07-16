#include <bits/stdc++.h>
using namespace std;

#define int long long

int helper(int st, int end, int p, int pre, vector<int> &v){
    
    int ans=0;

    int cl=0;
    int cr=0;

    int l = p; 
    int r = p;

    for(int i=st; i<=p; i++){
        if(v[i]!=v[p]){
            l=i;
            break;
        }
    }

    for(int i=end; i>=p; i--){
        if(v[i]!=v[p]){
            r=i;
            break;
        }
    }

    for(int i=l; i<p; i++){
        if(v[i]!=v[i+1]) cl++;
    }

    for(int i=r; i>p; i--){
        if(v[i]!=v[i-1]) cr++;
    }

    ans = max(cl, cr);

    if(ans % 2) ans++;

    return ans;
}

void solve() {
    int n,k;
    cin>>n>>k;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    vector<int> p(k); 
    for(int i=0; i<k; i++){
        cin>>p[i];
        p[i]--; 
    }

    int ans = 0;

    // 🔹 Special case
    if(k == 1){
        cout << helper(0, n-1, p[0], 0, v) << endl;
        return;
    }

    vector<int> mid;
    for(int i = 0; i < k-1; i++){
        mid.push_back((p[i] + p[i+1]) / 2);
    }

    ans += helper(0, mid[0], p[0], 0, v);

    for(int i = 1; i < k-1; i++){
        ans += helper(mid[i-1] + 1, mid[i], p[i], i, v);
    }

    ans += helper(mid[k-2] + 1, n-1, p[k-1], k-1, v);

    cout<<ans<<endl;
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