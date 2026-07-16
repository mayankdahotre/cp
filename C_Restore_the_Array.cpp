#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> b(n - 1), a;

    for (int i = 0; i < n - 1; i++)
        cin >> b[i];

    a.push_back(b[0]);
    for (int i = 0; i < n - 2; i++)
        a.push_back(min(b[i], b[i + 1]));
    a.push_back(b[n - 2]);

    for (auto &i : a)
        cout << i << ' ';
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
