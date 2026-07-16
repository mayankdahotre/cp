#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    int g = v[0];
    for (int i = 0; i < n; i++) {
        g = __gcd(g, v[i]);
    }

    int i=2;
    while(true){
        set<int> st;
        for (int j = 0; j < n; j++) {
            st.insert(v[j] % i);
        }
        if (st.size() == 2) {
            cout << i << endl;
            return;
        }
        i*=2;
    }

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
