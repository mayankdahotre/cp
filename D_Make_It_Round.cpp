#include <bits/stdc++.h>
using namespace std;

#define int long long

vector<int> d(int n){
    vector<int> res;
    while(n){
        res.push_back(n%10);
        n=n/10;
    }
    reverse(res.begin(), res.end());
    return res;
}

void solve() {
    int n, m;
    cin>>n>>m;

    vector<int> dig = d(n);

    while()
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