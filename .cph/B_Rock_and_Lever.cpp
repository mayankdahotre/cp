#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int num=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if((v[i]&v[j])>=(v[i]^v[j])) num++;
        }
    }

    cout<<num<<endl;
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