#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    vector<int> v(n+1);
    for(int i = 1; i <= n; i++) cin >> v[i];

    for(int i = 1; i <= n/2; i++){
        vector<int> p, idx;

        for(int j = i; j <= n; j *= 2){
            p.push_back(v[j]);
            idx.push_back(j);
        }

        sort(p.begin(), p.end());

        for(int k = 0; k < idx.size(); k++){
            v[idx[k]] = p[k];
        }
    }

    for(int i = 1; i < n; i++){
        if(v[i] > v[i+1]){
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) solve();
}