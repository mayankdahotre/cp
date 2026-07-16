#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;

    vector<long long> v(n);
    for (long long i = 0; i < n; i++) cin >> v[i];

    sort(v.begin(), v.end());

    long long i = 2 * k, j = n - 1;
    long long sum = 0, minsum = 0;

    for (long long l = i; l <= j; l++) sum += v[l];

    while (k--) {
        minsum = max(sum, minsum);
        sum += v[i - 1] + v[i - 2];
        sum -= v[j];
        i -= 2;
        j--;
    }

    minsum = max(minsum, sum);
    cout << minsum << endl;
}

int main() {
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
