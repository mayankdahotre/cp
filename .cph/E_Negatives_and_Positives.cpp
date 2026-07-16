#include <bits/stdc++.h>
using namespace std;

#define int long long  

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) 
        cin >> a[i];

    int no = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] < 0) no++;
        a[i] = abs(a[i]);  
    }

    sort(a.begin(), a.end());  

    int sum = 0;
    for (int i = 0; i < n; i++) 
        sum += a[i];

    if (no % 2 == 1) 
        sum -= 2 * a[0];

    cout << sum << endl;
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
