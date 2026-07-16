#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, c;
    cin >> n >> c;
    vector<int> a(n);
    for(int i = 0; i < n; i++) 
        cin >> a[i];

    vector<int> b(n);
    for(int i = 0; i < n; i++) {
        b[i] = a[i] + (i + 1); 
    }

    sort(b.begin(), b.end());

    int sum = 0, num = 0;
    for(int i = 0; i < n; i++) {
        sum += b[i];
        if(sum <= c) 
            num++;
        else 
            break;
    }

    cout << num << endl;
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
