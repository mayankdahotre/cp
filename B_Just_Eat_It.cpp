#include <bits/stdc++.h>
using namespace std;

#define int long long

int kadane(vector<int>& v, int l, int r){
    int cur = v[l];
    int best = v[l];

    for(int i = l+1; i <= r; i++){
        cur = max(v[i], cur + v[i]);
        best = max(best, cur);
    }

    return best;
}

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    int tot = accumulate(v.begin(), v.end(), 0LL);

    int left = kadane(v, 0, n-2);
    int right = kadane(v, 1, n-1);

    if(left >= tot || right >= tot) cout << "NO" << endl;
    else  cout << "YES" << endl;
    
    return;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--) solve();
}