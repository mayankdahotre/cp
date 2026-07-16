#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<vector<int>> v(n, vector<int>(n));

    int m = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<<m<<" ";
            m++;
        }
        cout<<endl;
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