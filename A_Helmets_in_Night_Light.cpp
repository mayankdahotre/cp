#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n, p;
    cin >> n >> p;

    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    vector<pair<int,int>> v;
    for(int i = 0; i < n; i++) {
        v.push_back({a[i], b[i]});
    }

    sort(v.begin(), v.end(), [](pair<int,int> p1, pair<int,int> p2){
        if(p1.second == p2.second){
            return p1.first > p2.first;
        }
        return p1.second < p2.second;
    });

    int t = 1;
    int cost = p;
    int i = 0;

    while(t < n && i < n){
        if(v[i].second <= p){
            int take = min(v[i].first, n - t);
            cost += take * v[i].second;
            t += take;
        } else {
            break;
        }
        i++;
    }

    if(t < n){
        cost += (n-t) * p;
    }

    cout << cost << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}