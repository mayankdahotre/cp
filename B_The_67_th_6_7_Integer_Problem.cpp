#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    vector<int> v(7);
    for(int i=0; i<7; i++) cin>>v[i];
  
    int sum = accumulate(v.begin(), v.end(), 0LL);
    int maxn = *max_element(v.begin(), v.end());
    cout << 2 * maxn - sum << endl;

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