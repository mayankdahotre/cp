#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    map<int,int> cnt;

    for(int i = 0; i < n; i++){
        int x = v[i];
        int msb = 0;

        for(int b = 31; b >= 0; b--){
            if(x & (1LL << b)){
                msb = b;
                break;
            }
        }

        cnt[msb]++;
    }

    int ans = 0;

    for(auto &it : cnt){
        int k = it.second;
        ans += (k * (k - 1)) / 2;
    }

    cout << ans << endl;
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