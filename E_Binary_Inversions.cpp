#include <bits/stdc++.h>
using namespace std;

#define int long long

int noi(vector<int> &v){
    int num=0;
    int n = v.size();
    int k = 0;
    for(int i=0; i<n; i++){
        if(v[i]==1) k++;
        if(v[i]==0) num+=k;
    }
    return num;
}

void solve() {
    int n, ans;
    cin >> n;
    vector<int> v(n);
    int f1 = -1, l1 = -1, f0 = -1, l0 = -1;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] == 1) { if (f1 == -1) f1 = i; l1 = i; }
        else { if (f0 == -1) f0 = i; l0 = i; }
    }
    ans = noi(v);
    if (l1 != -1) { v[l1] = 0; ans = max(ans, noi(v)); v[l1] = 1; }
    if (f0 != -1) { v[f0] = 1; ans = max(ans, noi(v)); v[f0] = 0; }
    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}