#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());                          
    v.erase(unique(v.begin(), v.end()), v.end());      

    int mex = 0;
    for(int x : v) {                                   
        if(x == mex) mex++;
        else if(x > mex) break;
    }

    if(k > mex) cout << mex << endl;
    else cout << k - 1<< endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while(T--) solve();
}