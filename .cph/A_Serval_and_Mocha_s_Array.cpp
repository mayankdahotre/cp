#include <bits/stdc++.h>
using namespace std;

#define int long long

void solve() {
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    sort(v.begin(), v.end());

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(__gcd(v[i],v[j])<=2){
                cout<<"Yes"<<endl;
                return;
            }
        }
    }
    cout<<"No"<<endl;
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