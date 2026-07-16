#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    bool b = true;
    while (b) {
        for (int i = 0; i < n - 3; i++) {
            if (v[i] + v[i+1] < v[i+2] + v[i+3]) {
                swap(v[i], v[i+2]);
                swap(v[i+1], v[i+3]);
                b = true;
            }
        }
        if(!b) break;
    }    

    for(int i=0; i<n; i++) cout<<v[i]<<" ";
    cout<<endl;

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