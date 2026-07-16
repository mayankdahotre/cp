#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    if (k == 2) {
        for (int i = 0; i < n; i++) {
            if (v[i] % 2 == 0) {
                cout << 0 << endl;
                return;
            }
        }
        cout << 1 << endl;
        return;
    }

    if (k == 3) {
        int m = 3;
        for (int i = 0; i < n; i++) {
            int rem = v[i] % 3;
            if (rem == 0) {
                cout << 0 << endl;
                return;
            }
            m = min(m, 3 - rem);
        }
        cout << m << endl;
        return;
    }

    if (k == 5) {
        int m = 5;
        for (int i = 0; i < n; i++) {
            int rem = v[i] % 5;
            if (rem == 0) {
                cout << 0 << endl;
                return;
            }
            m = min(m, 5 - rem);
        }
        cout << m << endl;
        return;
    }

    if (k == 4) {
        int c2 = 0, c4 = 0;
        for (int i = 0; i < n; i++) {
            int rem = v[i] % 4;
            if (rem == 0) c4++;
            if (v[i] % 2 == 0) c2++;
        }

        if (c4 > 0 || c2 >= 2) {
            cout << 0 << endl;
        } else if (c2 == 1) {
            cout << 1 << endl;
        } else {
            int m=0;
            for(int i=0; i<n; i++){
                if(v[i]%4==3){
                    cout<<1<<endl;
                    return;
                }
            }
            cout<<2<<endl;
            return;
        }
        return;
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
