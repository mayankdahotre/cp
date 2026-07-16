#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> v1(n); 
    for(int i = 0; i < n; i++) {
        cin >> v1[i];
    }

    vector<int> v2(n);
    for(int i = 0; i < n; i++) {
        cin >> v2[i];
    }

    if(v1 == v2) {
        cout << "Bob" << endl;
        return;
    }

    reverse(v2.begin(), v2.end());

    if(v1 == v2) {
        cout << "Bob" << endl;
        return;
    }
    else {
        cout << "Alice" << endl;
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
