#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int a,b;
    cin>>a>>b;

    int ans = LLONG_MAX;

    for(int add = 0; add <= 30; add++){
        int i = b + add;
        if(i == 1) continue;

        int c = a;
        int k = 0;

        while(c){
            c /= i;
            k++;
        }

        ans = min(ans, add + k);
    }

    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
}