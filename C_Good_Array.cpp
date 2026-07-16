#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin >> n;

    vector<int> v(n); 
    for(int i = 0; i < n; i++) cin >> v[i];

    int sum = 0;
    for(int i = 0; i < n; i++) sum += v[i];

    set<int> ans;

    multiset<int> sums;
    for(int i=0; i<n; i++) sums.insert(sum - 2*v[i]);

    for(int i=0; i<n; i++){
        sums.erase(sums.find(sum - 2*v[i])); // remove current
        
        if(sums.find(v[i]) != sums.end()) ans.insert(i);

        sums.insert(sum - 2*v[i]); // add back
    }

    cout << ans.size() << endl;
    for(auto i : ans) cout << i + 1 << " ";
    cout << endl;
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}