#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, k;
    cin >> n >> k;
    int x, a, b, c;
    cin >> x >> a >> b >> c;

    vector<int> v(n);
    v[0] = x;

    for (int i = 1; i < n; i++) {
        v[i] = (a * v[i - 1] + b) % c;
    }

    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += v[i];
    }

    int xor_sum = sum;  // Use a valid variable name

    for (int i = 0; i < n - k; i++) {
        sum += v[k + i] - v[i];
        xor_sum ^= sum;
    }

    cout << xor_sum << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}
